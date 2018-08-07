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
#include "testDuNombreSaisiEnModeDeuxJoueurs.h"

int niveauxEnModeDeuxJoueurs()
{
  int choixDuNiveauEnModeDeuxJoueurs;

  while (choixDuNiveauEnModeDeuxJoueurs < 1 || choixDuNiveauEnModeDeuxJoueurs > 2)
  {
    printf("\t\t     1. Niveau difficile (saisi du joueur 1)\n");
    printf("\t\t2. Niveau tres difficle (nombre de saisi limitee)\n\n");
    printf("\t\t\t     Quel niveau avez vous choisi ? ");
    scanf("%d", &choixDuNiveauEnModeDeuxJoueurs);
    printf("\n");
  }

  return choixDuNiveauEnModeDeuxJoueurs;
}

void niveauDurEnModeDeuxJoueurs()
{
    int nombreMystere;
    const int  MIN = 1, MAX_FACILE = 100;

    nombreMystere = (rand() % (MAX_FACILE - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("=============================== Niveau difficile ===============================\n\n");
    printf("Joueur 1 : Saisissez le nombre mystere : ");
    scanf("%d", &nombreMystere);
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("============================ Niveau tres difficile =============================\n\n");
    testDuNombreSaisiEnModeDeuxJoueurs(nombreMystere);
}

void niveauTresDurEnModeDeuxJoueurs()
{
    int nombreMystere;
    const int  MIN = 1, MAX_FACILE = 100;

    nombreMystere = (rand() % (MAX_FACILE - MIN + 1)) + MIN;
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("============================ Niveau tres difficile =============================\n\n");
    printf("Joueur 1 : Saisissez le nombre mystere : ");
    scanf("%d", &nombreMystere);
    system("cls");
    printf("\t\t\t\tJeu Du Plus Ou Moins\n\n");
    printf("============================ Niveau tres difficile =============================\n\n");
    testDuNombreSaisiAvecCompteurDeCoupsEnModeDeuxJoueurs(nombreMystere);
}
