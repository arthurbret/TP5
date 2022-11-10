#include <stdio.h>
#include "librairieTP5.h"

int saisieNumerateur(){
    int numerateur;
    printf("Saisir le numerateur : ");
    scanf("%d", &numerateur);
    return numerateur;
}

int saisieDenominateur(){
    int denomnateur;
    printf("Saisir le denominateur : ");
    scanf("%d", &denomnateur);
    return denomnateur;
}

int multiplication(int valeur1, int valeur2){
    int valeurFinale;
    valeurFinale = valeur1*valeur2;
    return valeurFinale;
}

int additionNumerateur(int valeur1, int valeur2, int num){
    int valeurFinale;
    if (num) {

    }
}

void affichageNombreRationnel(int numerateur, int denominateur){
    printf("%d/%d", numerateur, denominateur);
}