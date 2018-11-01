FROM gcc

RUN apt update -y && apt -y upgrade

RUN apt install -y valgrind

RUN apt clean

RUN mkdir /app

WORKDIR /app

ENTRYPOINT bash