gridPrint.exe: gridPrint.o GetUserChar.o PrintGrid.o
	g++ gridPrint.o GetUserChar.o PrintGrid.o -o gridPrint.exe

gridPrint.o: gridPrint.cpp Common.h
	g++ -c gridPrint.cpp

GetUserChar.o: GetUserChar.cpp Common.h
	g++ -c GetUserChar.cpp

PrintGrid.o: PrintGrid.cpp Common.h
	g++ -c PrintGrid.cpp

clean:
	rm *.o gridPrint.exe
