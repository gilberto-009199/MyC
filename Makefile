# My first makefile

# Define Qual e o arquivo final o ultimo a ser compilado
all: main

# Define quem precisa ser compilado antes para o main estar pronto para compilação
main: main.o util.o
	gcc -o main main.o util.o

# Define quem precisa ser compilado antes para o main.o estar pronto para compilação
# Nesse caso e necessario o arquivo main.c(Codigo fonte) + util.h(Arquivo de capecario lista de funcoes
# que existe no arquivo util.c  )
main.o: main.c util.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

# Define as dependencias par ao util.o que seria o util.c(Codigo fonte)
util.o: util.c util.h
	gcc -o util.o util.c -c -W -Wall -ansi -pedantic
# Cuida da limpeza da operacao resultante
clean:
	rm -rf *.o *~ main