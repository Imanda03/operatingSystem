#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    fork();
    printf("I am fork\n");
    printf("I am process and ID is %d\n", getpid());
    return 0;
}
