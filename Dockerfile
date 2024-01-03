FROM amd64/ubuntu:20.04

ENV TZ "Asia/Shanghai"
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone && rm -rf /var/lib/apt/lists/*

RUN apt-get update -y
RUN apt-get install -y locales vim git software-properties-common
RUN localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8
ENV LANG "en_US.utf8"

RUN add-apt-repository -y ppa:avsm/ppa
RUN apt-get install -y build-essential m4 python3-distutils python3-pip libgmp-dev libmpfr-dev libntl-dev liblapacke-dev libopenblas-dev zlib1g-dev coinor-libclp-dev pkg-config opam
RUN opam init -a -y -c 4.14.0
RUN opam repo add -y sv https://github.com/zkincaid/sv-opam.git#modern
RUN opam install -y dune.3.10.0 menhir.20230608 ppx_deriving.5.2.1 apron.v0.9.14 batteries.3.7.2 ocamlgraph.2.1.0 ntl.20221002 z3.4.12.4 core.v0.14.1 ppx_deriving_yojson.3.6.1 owl.1.1 mlcuddidl.3.0.7 ounit.2.2.7
RUN opam install -y OCRS.20221003
RUN pip3 install numpy matplotlib seaborn tabulate

RUN cd /root && git clone https://github.com/probing-lab/polar.git && cd polar && pip3 install -r requirements.txt
RUN eval $(opam env) && cd /root && git clone https://github.com/zkincaid/duet.git && cd duet && git checkout 36853aa && dune build srk && dune install srk
RUN eval $(opam env) && cd /root && git clone https://github.com/stonebuddha/NPA-PMA.git && cd NPA-PMA && git checkout main && dune build

RUN echo "test -r /root/.opam/opam-init/init.sh && . /root/.opam/opam-init/init.sh > /dev/null 2> /dev/null || true" >> /root/.bashrc

WORKDIR /root/NPA-PMA
ENTRYPOINT [ "/bin/bash" ]
