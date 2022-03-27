#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int menu = 1;

    int choix;

    while (menu == 1)
    {
        printf("Bonjour effectuer votre choix entre 1, 2, 3 et 0 pour quitter\n");
        printf("Tapez 1 pour faire un backup\nTapez 2 pour editer le text\nTapez 3 pour le supprimer\n->");

        scanf(" %d", &choix);
        
        while (choix < 0 || choix > 3)
            {
                printf("veuillez saisir une donné valide\n");

                scanf(" %d", &choix);
            }
        
        if (choix == 0)
        {
            menu = 0;
        }

        else if (choix == 1){
            
            execlp("cp", "cp", "fichier.txt", "backup.txt", NULL);
        }

        else if (choix == 2){
            
            execlp("vim", "vim", "fichier.txt", NULL);
        }

        else if (choix == 3){
            
            execlp("rm", "rm", "fichier.txt", NULL);
        }
    }
    
}