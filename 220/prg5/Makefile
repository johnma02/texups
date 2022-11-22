all: minstk

minstk: main.o minstack.o
	g++ main.o minstack.o -o minstk

main.o: main.cpp minstack.h
	g++ -std=c++17 -c main.cpp

minstack.o: minstack.cpp minstack.h
	g++ -std=c++17 -c minstack.cpp

clean:
	\rm *.o minstk
