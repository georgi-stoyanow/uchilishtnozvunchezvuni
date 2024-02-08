#ifndef PROCESSES
#define PROCESSES
#ifndef MAX_P
#define MAX_P 5
#endif
struct Process{
    int id;
    char name[30];
};
extern struct Process processes[5];
extern int processcount;
int createNewP(char name[]);
void stopP(int processId);
#endif