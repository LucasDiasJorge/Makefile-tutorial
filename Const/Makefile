# Defina as variáveis
CC = gcc
CFLAGS = -Wall -DVALOR_CONST=100 -DVALOR_CONST_STRING=\"Lucas\"

# Alvo padrão
all: main

# Compilação do executável
main: main.o
	$(CC) $(CFLAGS) -o main main.o

# Compilação do objeto
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Limpeza dos arquivos gerados
clean:
	rm -f *.o main
