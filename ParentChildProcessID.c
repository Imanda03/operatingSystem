#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int pid;
    printf("Parent Process and PID is %d\n", getpid());
    pid = fork();
    if (pid == 0)
    {
        printf("Child Process and PID is %d\n", getpid());
    }
    else
    {
        printf("Parent Process and PID is %d\n", getpid());
    }
    return 0;
}
