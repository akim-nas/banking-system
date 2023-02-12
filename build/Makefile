output: main.o functions.o
	g++ --std=c++20 -O2 -Wall main.o functions.o -o bank

main.o: main.cpp
	g++ --std=c++20 -O2 -Wall -c main.cpp

functions.o: functions.cpp functions.h
	g++ --std=c++20 -O2 -Wall -c functions.cpp

clean:
	del *.o bank.exe
