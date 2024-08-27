# Nome do arquivo a ser lido
FILE := test.txt

# Capturando o conteúdo do arquivo na variável VAR
VAR := $(shell cat $(FILE))

# Regra padrão
all: print_file

# Regra para imprimir o conteúdo da variável
print_file:
	@echo "Conteúdo do arquivo $(FILE):"
	@echo "$(VAR)"
