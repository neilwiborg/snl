FILE_NAME=test.out
COMPILE_FLAGS=-c
OBJECTS=test.o

$(FILE_NAME): test.o
	g++ test.o -o $(FILE_NAME)

test.o: test.cpp
	g++ $(COMPILE_FLAGS) test.cpp

run:
	./$(FILE_NAME)

debug:
	COMPILE_FLAGS="-c -g"
	$(call $(OBJECTS))
	gdb ./$(FILE_NAME)
	valgrind -s --leak-check=full ./$(FILE_NAME)

clean:
	rm *.o *.out