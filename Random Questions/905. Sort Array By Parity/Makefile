CC = g++

CFLAGS = -c -g
TESTFLAGS = -g -lgtest -lgtest_main -pthread

SRC = sortArrayByParity.cpp
OBJ = sortArrayByParity.o
WRP_SRC = test_sortArrayByParity.cpp
WRP_OBJ = test_sortArrayByParity.o
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
