FILE_NAME=test.out
CXX=clang++
DEBUGGER=lldb
BUILD_FLAGS=-std=c++11 -Wall -Wextra -Wno-sign-compare
DEBUG_FLAGS=-O0 -g -c $(BUILD_FLAGS)
RUN_PARAMS=./$(FILE_NAME)
CPPS=$(TEST_DIR)/test.cpp
OBJECTS=test.o
TEST_DIR=./test
# NDEBUG flag?

$(FILE_NAME): test.o
	$(CXX) test.o -o $(FILE_NAME) test.o -o $(FILE_NAME)

test.o: $(TEST_DIR)/test.cpp
	$(CXX) $(DEBUG_FLAGS) $(TEST_DIR)/test.cpp

test:

.PHONY: clean tidy format memcheck debug build run

clean:
	rm *.o *.out

tidy:
	clang-tidy $(CPPS) --

format:
	clang-format -i *.cpp *.h

memcheck:
	make
	valgrind -s --leak-check=full $(RUN_PARAMS)

debug:
	make
	$(DEBUGGER) $(RUN_PARAMS)
	make memcheck

build:
	$(CXX) $(BUILD_FLAGS) -o $(FILE_NAME) $(CPPS)

run:
	$(RUN_PARAMS)


