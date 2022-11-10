#include <stdio.h>
#include "librairieTP5.h"

int saisieNumerateur(){
    int numerateur;
    printf("Saisir le numerateur : ");
    scanf("%d", &numerateur);
    return numerateur;
}

int saisieDenominateur(){
    int denominateur;
    printf("Saisir le denominateur : ");
    scanf("%d", &denominateur);
    return denominateur;
}

int multiplication(int valeur1, int valeur2){
    int valeurFinale;
    valeurFinale = valeur1*valeur2;
    return valeurFinale;
}

int addition(int num1, int num2, int denum1, int denum2, int numDenum){
    int valeurFinale;
    if (numDenum) {
        valeurFinale = num1 * denum2 + num2 * denum1;
    }
    else{
        valeurFinale = denum1 * denum2;
    }
}

void affichageNombreRationnel(int numerateur, int denominateur){
    printf("%d/%d", numerateur, denominateur);
}