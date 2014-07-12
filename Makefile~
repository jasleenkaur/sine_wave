all: target run

sine_main.o: sine_main.cpp
	g++  -Wall -c sine_main.cpp
target: sine_main.o
	g++  -Wall -o exe sine_main.o
run:
	./exe
clean:
	rm -f sine_main.o exe
