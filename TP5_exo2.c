#include <stdio.h>
#include "librairieTP5.h"

int main(){
    int nbValeurs;
    printf("Combien de valeurs dans le tableau ? (maximum 100) :\n");
    scanf("%d", &nbValeurs);
    int tableau[nbValeurs];
    for (int i = 0; i < nbValeurs; ++i) {
        printf("Saisir la valeur numero %d : ", i+1);
        scanf("%d", &tableau[i]);
    }


    return 0;
}
