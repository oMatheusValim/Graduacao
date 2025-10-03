# Compilador a ser usado
CC=gcc
# Flags de compilação
CFLAGS=-Wall -Wextra -std=c99
# Flags do linker (para a biblioteca de matemática)
LDFLAGS=-lm
# Nome do executável
TARGET=programa
# Arquivos objeto
OBJS=main.o Ponto.o

# Phony targets não representam arquivos
.PHONY: all run clean

# Regra padrão: compila o programa
all: $(TARGET)

# Regra para criar o executável a partir dos arquivos objeto
# CORREÇÃO: $(LDFLAGS) foi para o final da linha. Esta é a mudança crucial.
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Regra para compilar o main.c
main.o: main.c Ponto.h
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar o Ponto.c
Ponto.o: Ponto.c Ponto.h
	$(CC) $(CFLAGS) -c Ponto.c

# Regra para executar o programa
run: all
	./$(TARGET)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)

