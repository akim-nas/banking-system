output: main.o user.o admin.o functions.o
	g++ --std=c++17 -O2 -Wall main.o user.o admin.o functions.o -o output

main.o: main.cpp
	g++ --std=c++17 -O2 -Wall -c main.cpp

admin.o: admin.cpp admin.h
	g++ --std=c++17 -O2 -Wall -c admin.cpp

user.o: user.cpp user.h
	g++ --std=c++17 -O2 -Wall -c user.cpp

functions.o: functions.cpp functions.h
	g++ --std=c++17 -O2 -Wall -c functions.cpp

clean:
	del *.o output.exe
