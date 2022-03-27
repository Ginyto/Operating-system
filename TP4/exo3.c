#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <signal.h>
#include <unistd.h>


void times_up(){
    printf("Temps de reflexion dépassé");
    kill(getpid(), SIGINT);
}

int main(int argc, char const *argv[])
{
    signal(SIGALRM, times_up);

    char rep[3];

    printf("Etes vous une garçons ?\n->");
    alarm(12);
    scanf("%s", rep);
    
    printf("Etes vous une fille ?\n->");
    alarm(12);
    scanf("%s", rep);
    
    printf("Etes vous un robot  ?\n->");
    alarm(12);
    scanf("%s", rep);
    
}
