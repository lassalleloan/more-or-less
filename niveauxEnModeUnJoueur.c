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
#include "testDuNombreSaisiEnModeUnJoueur.h"

int niveauxEnModeUnJoueur()
{
    int choixDeNiveauEnModeUnJoueur;

    while (choixDeNiveauEnModeUnJoueur < 1 || choixDeNiveauEnModeUnJoueur > 4)
    {
        printf("\t\t\t1. Niveau facile (entre 1 et 100)\n");
        printf("\t\t\t2. Niveau moyen (entre 1 et 1000)\n");
        printf("\t\t     3. Niveau difficile (entre 1 et 10000)\n");
        printf("\t\t4. Niveau tres difficle (nombre de saisi limitee)\n\n");
        printf("\t\t\t     Quel niveau avez vous choisi ? ");
        scanf("%d", &choixDeNiveauEnModeUnJoueur);
        printf("\n");
    }

    return choixDeNiveauEnModeUnJoueur;
}

void niveauFacileEnModeUnJoueur()
{
    int nombreMystere;
    const int  MIN = 1, MAX_FACILE = 100;

    nombreMystere = (rand() % (MAX_FACILE - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("================================= Niveau facile ===============================\n\n");
    testDuNombreSaisiEnModeUnJoueur(nombreMystere);
}

void niveauMoyenEnModeUnJoueur()
{
    int nombreMystere;
    const int  MIN = 1, MAX_MOYEN = 1000;

    nombreMystere = (rand() % (MAX_MOYEN - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("================================ Niveau moyen =================================\n\n");
    testDuNombreSaisiEnModeUnJoueur(nombreMystere);
}

void niveauDurEnModeUnJoueur()
{
    int nombreMystere;
    const int  MIN = 1, MAX_DUR = 10000;

    nombreMystere = (rand() % (MAX_DUR - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("=============================== Niveau difficile ===============================\n\n");
    testDuNombreSaisiEnModeUnJoueur(nombreMystere);
}

void niveauTresDurEnModeUnJoueur()
{
    int nombreMystere;
    const int  MIN = 1, MAX_FACILE = 100;

    nombreMystere = (rand() % (MAX_FACILE - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("============================ Niveau tres difficile =============================\n\n");
    testDuNombreSaisiAvecCompteurDeCoupsEnModeUnJoueur(nombreMystere);
}
