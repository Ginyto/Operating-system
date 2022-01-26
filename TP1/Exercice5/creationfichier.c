#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    /* Chemin vers le nouveau fichier */
    const char* path = "test1.txt";

    /* Permissions du nouveau fichier */
    mode_t mode = S_IRUSR | S_IWUSR | S_IWGRP; /* Crée le fichier */

    int fd = open(path, O_RDWR | O_CREAT, mode);

    if (fd == -1)
    {
    /* Une erreur est survenue, affiche un message et quitte. */
        perror("open");
        return 1;
    }

    printf("Le fichier -> %s a éte crée!\n", path);
    
    return 0;
}