FILE_NAME=test.out
COMPILER=clang++
BUILD_FLAGS=-std=c++11 -Wall -Wextra -Wno-sign-compare
DEBUG_FLAGS=-g -c $(BUILD_FLAGS)
CPPS=test.cpp
OBJECTS=test.o
# NDEBUG flag?

$(FILE_NAME): test.o
	$(COMPILER) test.o -o $(FILE_NAME)

test.o: test.cpp
	$(COMPILER) $(DEBUG_FLAGS) test.cpp

run:
	./$(FILE_NAME)

build:
	$(COMPILER) $(BUILD_FLAGS) -o $(FILE_NAME) $(CPPS)

debug:
	make
	gdb ./$(FILE_NAME)
	valgrind -s --leak-check=full ./$(FILE_NAME)

.PHONY: clean

clean:
	rm *.o *.out
