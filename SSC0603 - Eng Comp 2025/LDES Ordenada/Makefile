# Compilador a ser usado
CC=gcc
# Flags de compilação
CFLAGS=-Wall -Wextra -std=c99
# Flags do linker (para a biblioteca de matemática)
LDFLAGS=-lm
# Nome do executável
TARGET=lista_ordenada
# Arquivos objeto
OBJS=main.o lista.o

# Phony targets não representam arquivos
.PHONY: all run clean

# Regra padrão: compila o programa
all: $(TARGET)

# Regra para criar o executável a partir dos arquivos objeto
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Regra para compilar o main.c
main.o: main.c lista.h
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar o lista.c
lista.o: lista.c lista.h
	$(CC) $(CFLAGS) -c lista.c

# Regra para executar o programa
run: all
	./$(TARGET)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)

