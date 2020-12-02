FROM gcc
COPY . /compilador
WORKDIR /compilador
RUN g++ -o compilador src/main.cpp
CMD ["./compilador"]
