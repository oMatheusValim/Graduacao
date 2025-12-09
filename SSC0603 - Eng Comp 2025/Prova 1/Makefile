CC=gcc
CFLAGS=-Wall -Wextra -std=c99
LDFLAGS=-lm

TARGET=prova_1
OBJS=main.o p1.o

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c p1.h
	$(CC) $(CFLAGS) -c main.c

p1.o: p1.c p1.h
	$(CC) $(CFLAGS) -c p1.c

run: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
