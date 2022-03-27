#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h>


int main(int argc, char const *argv[])
{
    printf("\nprocessus -> %d\npere -> %d\n", getpid(), getppid());
}
