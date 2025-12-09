CC=gcc
CFLAGS=-Wall -Wextra -std=c99
LDFLAGS=-lm

TARGET=trabalho_3
OBJS=main.o arvoreAVL.o lista.o

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS) 

main.o: main.c arvoreAVL.h lista.h
	$(CC) $(CFLAGS) -c main.c

arvoreAVL.o: arvoreAVL.c arvoreAVL.h lista.h
	$(CC) $(CFLAGS) -c arvoreAVL.c

lista.o: lista.c lista.h
	$(CC) $(CFLAGS) -c lista.c

run: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)