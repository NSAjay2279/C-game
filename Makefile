all:
	g++ -Isrc/Include -Lsrc/lib -o main.c -lmingw32 -lSDL2main
