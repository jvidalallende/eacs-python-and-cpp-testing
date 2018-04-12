FROM alpine:latest

RUN apk add --no-cache \
    make \
    cmake \
    g++ \
    git \
    boost-dev \
    python2-dev \
    swig \
    vim

ADD src /root/src

RUN mkdir /root/build \
    && cd /root/build \
    && cmake ../src \
    && make
