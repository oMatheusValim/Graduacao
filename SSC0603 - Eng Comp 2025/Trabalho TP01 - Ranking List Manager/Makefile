CC=gcc
CFLAGS=-Wall -Wextra -std=c99
LDFLAGS=-lm

TARGET=trabalho_1
OBJS=main.o lista_LDED.o

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS) 

main.o: main.c lista_LDED.h
	$(CC) $(CFLAGS) -c main.c

lista_LDED.o: lista_LDED.c lista_LDED.h
	$(CC) $(CFLAGS) -c lista_LDED.c

run: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)