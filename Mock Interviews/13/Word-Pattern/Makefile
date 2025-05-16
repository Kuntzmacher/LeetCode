CC = g++
CFLAGS = -c -g

SRC = Word-Pattern.cpp
OBJ = Word-Pattern.o

all: $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o "$@"

clean:
	rm -f "$(OBJ)"
