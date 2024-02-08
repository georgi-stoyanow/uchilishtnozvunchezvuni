all: main.exe

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -lm -o quadraticroots.o

main.exe: quadraticroots.o main.c
	gcc main.c quadraticroots.o -o main.exe

clean:
	del *.exe *.o