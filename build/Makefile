TARGET := ../bank.exe
MAIN := ../src/main.cpp
FUNCTIONS := ../src/functions.cpp

bank: main.o functions.o
	g++ -O3 -Wall main.o functions.o -o $(TARGET)

main.o: $(MAIN)
	g++ -O3 -Wall -c $(MAIN)

functions.o: $(FUNCTIONS)
	g++ -O3 -Wall -c $(FUNCTIONS)

clean:
	del *.o
