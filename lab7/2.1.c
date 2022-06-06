#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();
    
    if (pid == 0)
        printf("Parent: %d\nChild: %d\n", getppid(), getpid());
    
    return 0;
}