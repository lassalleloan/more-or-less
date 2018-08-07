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
#include "niveauxEnModeUnJoueur.h"
#include "niveauxEnModeDeuxJoueurs.h"

void choixDuNiveauEnModeUnJoueur()
{
    system("cls");
    printf("\t\t\t\t\Jeu Du Plus Ou Moins\n\n");
    printf("================================ Mode un joueur ================================\n\n");
    switch (niveauxEnModeUnJoueur())
    {
        case 1 :
            niveauFacileEnModeUnJoueur();
            break;

        case 2 :
            niveauMoyenEnModeUnJoueur();
            break;

        case 3 :
            niveauDurEnModeUnJoueur();
            break;

        case 4 :
            niveauTresDurEnModeUnJoueur();
            break;
    }
}

void choixDuNiveauEnModeDeuxJoueurs()
{
    system("cls");
    printf("\t\t\t\t\Jeu Du Plus Ou Moins\n\n");
    printf("=============================== Mode deux joueurs ==============================\n\n");
    switch(niveauxEnModeDeuxJoueurs())
    {
        case 1 :
            niveauDurEnModeDeuxJoueurs();
            break;

        case 2 :
            niveauTresDurEnModeDeuxJoueurs();
            break;
    }
}
