# Defina as variáveis
CC = gcc
CFLAGS = -Wall
CONST = -DVALOR_CONST=100 -DVALOR_CONST_STRING=\"Lucas\"

# Alvo padrão
all: main

# Compilação do executável
main: main.o
	$(CC) $(CFLAGS) $(CONST) -o main main.o

# Compilação do objeto
main.o: main.c
	$(CC) $(CFLAGS) $(CONST) -c main.c

# Limpeza dos arquivos gerados
clean:
	rm -f *.o main
