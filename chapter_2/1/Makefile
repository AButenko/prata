all: main

main.o: main.cpp
	g++ -c -o $@ $<

main: main.o
	g++ -o $@ $^

.PHONY: clean

clean:
	rm main.o main
