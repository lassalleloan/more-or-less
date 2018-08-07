/*
-------- Plus Ou Moins --------
Auteur : L. Lassalle
Date : Septembre 2013
Description :
Décrouvrir le nombre mystère.

-------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include "choixEnFinDePartie.h"

void testDuNombreSaisiEnModeDeuxJoueurs(int nombreMystere)
{
    int nombreEntre;

    do
    {
        printf("Joueur 2 : Quel est le nombre mystere ? ");
        scanf("%d", &nombreEntre);
        printf("\n");

        if (nombreEntre < nombreMystere)
        {
            printf("C'est plus !\n\n");
        }
            else if (nombreEntre > nombreMystere)
            {
                printf("C'est moins !\n\n");
            }
                else
                {
                    printf("Bravo ! Vous avez trouvez le nombre mystere %d !\n\n", nombreMystere);
                    choixEnFinDePartie();
                }

    } while (nombreEntre != nombreMystere);
}

void testDuNombreSaisiAvecCompteurDeCoupsEnModeDeuxJoueurs(int nombreMystere)
{
    int nombreEntre, compteur = 0;

    do
    {
        printf("Joueur 2 : Quel est le nombre mystere ? ");
        scanf("%d", &nombreEntre);
        compteur++;
        printf("\n");

        if (nombreEntre < nombreMystere)
        {
            printf("C'est plus !\n\n");
        }
            else if (nombreEntre > nombreMystere)
            {
                printf("C'est moins !\n\n");
            }
                else
                {
                    printf("Bravo ! Vous avez trouvez le nombre mystere %d !\n\n", nombreMystere);
                    choixEnFinDePartie();
                }

    } while ((compteur < 11) && (nombreEntre != nombreMystere));

    if (compteur > 10)
    {
        printf("Vous avez perdu !\n");
        choixEnFinDePartie();
    }
}
