output: main.o user.o admin.o functions.o
	g++ main.o user.o admin.o functions.o -o output

main.o: main.cpp
	g++ -c main.cpp

admin.o: admin.cpp admin.h
	g++ -c admin.cpp

user.o: user.cpp user.h
	g++ -c user.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	del *.o output.exe
