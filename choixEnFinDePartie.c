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
#include "choixDuModeDeJeu.h"

int menuEnFinDePartie()
{
    int choixDuMenuEnFinDePartie = 0;

    while (choixDuMenuEnFinDePartie < 1 || choixDuMenuEnFinDePartie > 3)
    {
        printf("\t\t1. Changer le niveau de difficulte en mode un joueur ?\n");
        printf("\t\t2. Changer le niveau de difficulte en mode deux joueurs ?\n");
        printf("\t\t\t\t3. Changer de mode de jeu\n\n");
        printf("\t\t\t\tQue voulez-vous faire ? ");
        scanf("%d", &choixDuMenuEnFinDePartie);
        printf("\n");
    }

    return choixDuMenuEnFinDePartie;
}

void choixEnFinDePartie()
{
    switch (menuEnFinDePartie())
    {
        case 1 :
            choixDuNiveauEnModeUnJoueur();
            break;

        case 2 :
            choixDuNiveauEnModeDeuxJoueurs();
            break;

        case 3 :
            choixDuModeDeJeu();
            break;
    }
}
