#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
    int num = 0;
    char **env_ptr;
    
    for (env_ptr = environ; *env_ptr != NULL; env_ptr++)
        num++;
    
    printf("Number of environment variables: %d\n"
           "Number of arguments: %d\n", num, argc);
    
    return 0;
}