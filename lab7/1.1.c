#include <stdio.h>

extern char **environ;

int main() {
    int num = 0;
    char **env_ptr;
    
    for (env_ptr = environ; *env_ptr != NULL; env_ptr++)
        num++;
    
    printf("Number of environment variables: %d\n", num);
    
    return 0;
}