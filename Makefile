output: main.o create.o functions.o
	g++ main.o create.o functions.o -o output

main.o: main.cpp
	g++ -c main.cpp

create.o: create.cpp create.h
	g++ -c create.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	del *.o output.exe
