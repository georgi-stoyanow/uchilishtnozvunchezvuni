all: taskmanager.exe processes.o
	./taskmanager.exe 

processes.o: processes.h processes.c
	gcc -c processes.c -o processes.o

taskmanager.exe: taskmanager.c processes.o
	gcc taskmanager.c processes.o -o taskmanager.exe

clean:
	del *.o *.exe