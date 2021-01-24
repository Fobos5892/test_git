all: clean main

main:
	g++ main.cpp -o  main -w -std=c++17
clean:
	-rm -f main