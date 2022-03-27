#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int clone_1 = fork();

    //printf("Hello there! from %d \n", pid);

    if (clone_1 == 0) /*Fils*/
    {

        printf("bobby 1 PID : %d  PPID: %d\n", getpid(), getppid());

        int clone_4 = fork();

        if (clone_4 == 0) /*Fils*/{
            sleep(2);
            printf("petit_bobby 1 PID : %d  PPID: %d\n", getpid(), getppid());
        }
        else{
            int clone_5 = fork();

            if (clone_5 == 0) /*Fils*/{
                sleep(3);
                printf("petit_bobby 2 PID : %d  PPID: %d\n", getpid(), getppid());
            }
        }
    }

    else{ /*Current*/

        printf("\n\npapa    PID : %d  PPID: %d\n", getpid(), getppid());

        int clone_2 = fork();

        if (clone_2 == 0) /*Fils*/
        {
            sleep(4);
            printf("bobby 2 PID : %d  PPID: %d\n", getpid(), getppid());
        }
        else{ /*Current*/

            int clone_3 = fork();

            if (clone_3 == 0) /*Fils*/{
                sleep(5);
                printf("bobby 3 PID : %d  PPID: %d\n", getpid(), getppid());
            }

        }
    }
}
