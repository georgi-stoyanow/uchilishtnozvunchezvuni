#include "processes.h"
#include <stdio.h>
#include <strings.h>

struct Process processes[5];
int processcount = 0;

static int nextId(){
    static int id=0;
    id++;
    if (id <= 0){
        return 0;   
        }
    else{
        return id;
    }
}

int createNewP(char name[]) {
    if (processcount < 5) {
        int id= nextId();
        if (id != 0) {
            processes[processcount].id = id;
            strcpy(processes[processcount].name, name);
            processes[processcount].name[30] = '\0';
            processcount++;
        }
        return id;
    } else {
        printf("Error: Maximum number of processes reached.\n");
        return 0;
    }
}

void stopP(int processId) {
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == processId) {
            for (int j = i; j < processcount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processcount--;
            printf("Process %d stopped.\n", processId);
            return;
        }
    }
    printf("Error: Invalid process ID.\n");
}