all: clean main

main:
	g++ main.cpp -o  main -w -std=c++20
clean:
	-rm -f main