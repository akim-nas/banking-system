TARGET := ../bank.exe
MAIN := ../src/main.cpp
FUNCTIONS := ../src/functions.cpp

bank: main.o functions.o
	g++ -03 -Wall main.o functions.o -o $(TARGET)

main.o: $(MAIN)
	g++ -03 -Wall -c $(MAIN)

functions.o: $(FUNCTIONS)
	g++ -03 -Wall -c $(FUNCTIONS)

clean:
	del *.o
