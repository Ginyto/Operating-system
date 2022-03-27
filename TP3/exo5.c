#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h>


int main(int argc, char const *argv[]) {
    int p1 = fork();


    if (p1 == 0) /*fils*/
    {
        printf("\n\nfils 1    PID : %d  PPID: %d\n", getpid(), getppid());

        execlp("ls", "ls", "-l", NULL);

        exit(0);
    }

    else /*papa*/ {

        printf("\n\npapa    PID : %d  PPID: %d\n", getpid(), getppid());

        int p2 = fork();

        if (p2 == 0) /*fils*/{

            printf("\n\nfils 2    PID : %d  PPID: %d\n", getpid(), getppid());

            execlp("ps", "ps", "-l", NULL);

            exit(0);
        }
    }
}