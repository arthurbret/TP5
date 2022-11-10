#include <stdio.h>
#include "librairieTP5.h"

int main() {
    struct nombreRationnel quotient1;
    struct nombreRationnel quotient2;
    struct nombreRationnel quotientFinal;
    printf("Premier nombre rationnel :\n");
    quotient1.numerateur = saisieNumerateur();
    quotient1.denominateur = saisieDenominateur();
    printf("Deuxieme nombre rationnel :\n");
    quotient2.numerateur = saisieNumerateur();
    quotient2.denominateur = saisieDenominateur();
    quotientFinal.numerateur = multiplication(quotient1.numerateur, quotient2.numerateur);
}
