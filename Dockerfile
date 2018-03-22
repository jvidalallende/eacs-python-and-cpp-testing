FROM ubuntu:xenial

RUN apt-get update && apt-get install -y \
    cmake \
    g++ \
    git \
    libboost-python-dev \
    python-dev \
    swig \
    vim-nox

ADD src /root/src

RUN mkdir /root/build \
    && cd /root/build \
    && cmake ../src \
    && make
