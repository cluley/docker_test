FROM gcc:latest
	LABEL maintainer="oo43@yandex.ru"
	WORKDIR /root/test
  	COPY . /root/test
	RUN g++ -o test main.cpp
	CMD ["./test"]