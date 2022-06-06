#include <stdio.h>

extern char **environ;

int main() {
    
    for (int i = 0; i < 10 && environ[i] != 0; i++)
        printf("%s\n", *environ[i]);
    
    return 0;
}