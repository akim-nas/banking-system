TARGET := ../bank.exe
MAIN := ../src/main.cpp
FUNCTIONS := ../src/functions.cpp

bank: main.o functions.o
	g++ main.o functions.o -o $(TARGET)

main.o: $(MAIN)
	g++ -c $(MAIN)

functions.o: $(FUNCTIONS)
	g++ -c $(FUNCTIONS)

clean:
	del *.o
