CC=gcc
CFLAGS=-Wall -Wextra -std=c99
LDFLAGS=-lm

TARGET=prova_2
OBJS=main.o arvore.o lista.o

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS) 

main.o: main.c arvore.h lista.h
	$(CC) $(CFLAGS) -c main.c

arvore.o: arvore.c arvore.h lista.h
	$(CC) $(CFLAGS) -c arvore.c

lista.o: lista.c lista.h
	$(CC) $(CFLAGS) -c lista.c

run: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)