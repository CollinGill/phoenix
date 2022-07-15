TARGET = phoenix
CC = g++
CFLAGS = -Wall
SRC := $(wildcard src/*.cpp)
OBJ := $(SRC:.cpp=.o)
INC := $(wildcard include/*.h)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

src/%.o: %.cpp $(INC)
	$(CC) -c $(CFLAGS) $<

run:
	./$(TARGET)

clean:
	rm $(TARGET) $(OBJ)
	clear