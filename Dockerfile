FROM ubuntu:latest
RUN apt-get update && apt-get install -y g++
COPY . /app
WORKDIR /app/cpp_firstlab
RUN g++ -o my_program *.cc
CMD ["./my_program"]
