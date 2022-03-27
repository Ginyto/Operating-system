#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <signal.h>
#include <unistd.h>

void hola(int sig)
{
    signal(SIGUSR1, hola);
    printf("Con mucho gusto\n");
}

void gracias(int sig)
{
    signal(SIGUSR2, gracias);
    printf("Gracias\n");
}

void stop(int sig)
{
    printf("Adios\n");
    exit(0);
}


int main(int argc, char const *argv[])
{

    signal(SIGUSR1, hola);
    signal(SIGUSR2, gracias);
    signal(SIGQUIT, stop);

}
