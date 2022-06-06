#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return -1;
    }
    
    int num = atoi(argv[1]);
    
    for (int i = 0; i < num && environ[i] != 0; i++)
        printf("%s\n", *environ[i]);
    
    return 0;
}