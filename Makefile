output: main.o create.o
	g++ main.o create.o -o output

main.o: main.cpp
	g++ -c main.cpp

create.o: create.cpp create.h
	g++ -c create.cpp

clean:
	del *.o output.exe
