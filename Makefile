CC=gcc

FuC=src/over.c src/engineering.c src/your.c src/code.c src/is.c src/bad.c

UnFuC=build/app

fUc=-Iinclude
fUC=-lX11 -lGLX -lGLU -lGL -lm

run: $(UnFuC)
	$(UnFuC)

$(UnFuC): $(FuC)
	$(CC) $(FuC) $(fUC) $(fUc) -o $(UnFuC)
