CC=gcc

FuC=src/code.c src/engineering.c src/over.c src/bad.c

UnFuC=build/app

fUc=-Iinclude
fUC=-lX11

run: $(UnFuC)
	$(UnFuC)

$(UnFuC): $(FuC)
	$(CC) $(FuC) $(fUC) $(fUc) -o $(UnFuC)
