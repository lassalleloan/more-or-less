/*
-------- Plus Ou Moins --------
Auteur : L. Lassalle
Date : Septembre 2013
Description :
D�crouvrir le nombre myst�re.

-------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "choixDuModeDeJeu.h"

int main(int argc, char *argv[])
{
    srand (time(NULL));

    choixDuModeDeJeu();

    return 0;
}

