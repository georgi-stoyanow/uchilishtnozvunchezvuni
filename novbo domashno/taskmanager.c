#include "processes.h"
#include <stdio.h>

void printP() {
    printf("Processes:\n");
    for (int i = 0; i < processcount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

int main() {
    int choice;
    char name[30];
    int processId;

    while (1) {
        printf("1. Create new process\n");
        printf("2. List all processes\n");
        printf("3. Stop process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter process name: ");
                scanf("%s", name);
                createNewP(name);
                break;
            case 2:
                printP();
                break;
            case 3:
                printf("Enter process ID to stop: ");
                scanf("%d", &processId);
                stopP(processId);
                break;
            case 4:
                printf("Exiting task manager.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}