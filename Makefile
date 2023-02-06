output: main.o user.o functions.o
	g++ main.o user.o functions.o -o output

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp user.h
	g++ -c user.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	del *.o output.exe
