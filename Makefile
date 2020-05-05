CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-O2
OBJECTS=generateBoard.o main.o

make: $(OBJECTS)
	$(CXX) $(OBJECTS)

.PHONY: clean
clean:
	-rm -f *.o *~ a.out

generateBoard.o: generateBoard.cpp generateBoard.h
main.o: main.cpp generateBoard.h