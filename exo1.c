#include <stdio.h>
#include "librairieTP5.h"

int main() {
    struct nombreRationnel quotient1;
    struct nombreRationnel quotient2;
    struct nombreRationnel quotientFinalMultiplication;
    struct nombreRationnel quotientFinalAddition;
    printf("Premier nombre rationnel :\n");
    quotient1.numerateur = saisieNumerateur();
    quotient1.denominateur = saisieDenominateur();
    printf("Deuxieme nombre rationnel :\n");
    quotient2.numerateur = saisieNumerateur();
    quotient2.denominateur = saisieDenominateur();
    quotientFinalMultiplication.numerateur = multiplication(quotient1.numerateur, quotient2.numerateur);
    quotientFinalMultiplication.denominateur = multiplication(quotient1.denominateur, quotient2.denominateur);
    quotientFinalAddition.numerateur = addition(quotient1.numerateur, quotient2.numerateur, quotient1.denominateur,quotient2.denominateur, 1);
    quotientFinalAddition.denominateur = addition(quotient1.numerateur, quotient2.numerateur,quotient1.denominateur, quotient2.denominateur, 0);
    printf("Le resultat de la multiplication est ");
    affichageNombreRationnel(quotientFinalMultiplication.numerateur, quotientFinalMultiplication.denominateur);
    printf("Le resultat de l'addition est ");
    affichageNombreRationnel(quotientFinalAddition.numerateur, quotientFinalAddition.denominateur);
    return 0;
}
