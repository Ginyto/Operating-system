#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <signal.h>
#include <unistd.h>


void execcmd(char cmd[10], char option[10]){
    execlp(cmd, cmd, option, NULL);
}

int main(int argc, char const *argv[])
{
    char cmd[10];
    char option[10];

    printf("\ncmd-> ");
    scanf("%s", cmd);

    printf("\noption-> ");
    scanf("%s", option);
    

    execcmd(cmd, option);
}
