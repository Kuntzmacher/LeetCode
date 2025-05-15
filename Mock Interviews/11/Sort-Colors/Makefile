CC = g++
CFLAGS = -c -g

SRC = Sort-Colors.cpp
OBJ = Sort-Colors.o

all: $(OBJ)

%.o: %.cpp
	$(CC) "$(CFLAGS)" $< -o "$@"

clean:
	rm -f "$(OBJ)"
