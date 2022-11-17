#include <stdio.h>
#include "librairieTP5.h"

int main(){
    int nbValeurs, valeurLaPlusGrande;
    printf("Combien de valeurs dans le tableau ? (maximum 100) :\n");
    scanf("%d", &nbValeurs);
    int tableau[nbValeurs];
    for (int i = 0; i < nbValeurs; ++i) {
        printf("Saisir la valeur numero %d :", i+1);
        scanf("%d", &tableau[i]);
    }
    for (int i = 1; i < (nbValeurs-1); ++i) {
        tableau[i+1] > tableau[i] ? valeurLaPlusGrande = tableau[i+1] : valeurLaPlusGrande = tableau[i];
    }


    return 0;
}
