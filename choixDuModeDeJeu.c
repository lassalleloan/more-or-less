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
#include "choixDuNiveau.h"

int menuEnDebutDePartie()
{
    int choixDuMenuEnDebutDePartie = 0;

    do
    {
        system("cls");
        printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
        printf("====================================== Menu ====================================\n\n");
        printf("\t\t\t\t1. Mode un joueur\n");
        printf("\t\t\t\t2. Mode deux joueurs\n\n");
        printf("\t\t\t     Quel mode avez vous choisi ? ");
        scanf("%d", &choixDuMenuEnDebutDePartie);
        printf("\n");

    } while  (choixDuMenuEnDebutDePartie < 1 || choixDuMenuEnDebutDePartie > 2);

    return choixDuMenuEnDebutDePartie;
}

void choixDuModeDeJeu()
{
    switch (menuEnDebutDePartie())
    {
        case 1 :
            choixDuNiveauEnModeUnJoueur();
            break;

        case 2 :
            choixDuNiveauEnModeDeuxJoueurs();
            break;
    }
}
