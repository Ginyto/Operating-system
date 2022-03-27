#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char const *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("resultat.txt", "w+");

    if (fichier != NULL){


        for (int i = 0; i <= 10; i++)
        {
            printf("j'écris %d dans le fichier\n", i);
            fprintf(fichier, "%d\n", i);
        }

        fclose(fichier);
    }

    FILE* impairs = NULL;

    impairs = fopen("resultat_impairs.txt", "w+");

    if (impairs != NULL){


        for (int i = 0; i <= 10; i++)
        {
            if (i%2 != 0)
            {
                printf("j'écris %d dans le impairs\n", i);
                fprintf(impairs, "%d\n", i);
            }
            
        }

        fclose(impairs);
    }

    int seek;

    seek = fopen("resultat_seek.txt", "O_RDONLY");

    char buffer[1];

    for (int i = 0; i < 10; i++)
    {
        if (i%2 != 0){
            lseek(seek, i, SEEK_SET);
            read(seek, buffer, sizeof(buffer));
        }
    }
    
    close(seek);

    
}
