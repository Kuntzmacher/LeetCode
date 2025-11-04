CC = g++

CFLAGS = -c -g
TESTFLAGS = -g -lgtest -lgtest_main -pthread

SRC = findMissingAndRepeatedValues.cpp
OBJ = findMissingAndRepeatedValues.o
WRP_SRC = test_findMissingAndRepeatedValues.cpp
WRP_OBJ = test_findMissingAndRepeatedValues.o
TST = test.o

.PHONY: all build clean test

all: $(OBJ) $(WRP_OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $< -o "$@"

$(WRP_OBJ): $(WRP_SRC)
	$(CXX) $(CFLAGS) $< -o "$@"

test: $(OBJ) $(WRP_OBJ)
	$(CXX) $(TESTFLAGS) $(OBJ) $(WRP_OBJ) -o $(TST)

clean:
	rm $(OBJ) $(WRP_OBJ) $(TST)
