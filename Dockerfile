FROM gcc:latest
	LABEL maintainer="oo43@yandex.ru"
	RUN apt-get update && apt-get install -y gcc
	WORKDIR /root/test
  	COPY . /root/test
	RUN gcc -o test main.cpp
	CMD ["./test"]