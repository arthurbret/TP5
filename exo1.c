#include <stdio.h>
#include "librairieTP5.h"

int main() {
    struct nombreRationnel quotient1;
    struct nombreRationnel quotient2;
    printf("Premier nombre rationnel : ");
    quotient1.numerateur = saisieNumerateur();
    quotient1.denominateur = saisieDenominateur();
    printf("Deuxieme nombre rationnel : ");
    quotient2.numerateur = saisieNumerateur();
    quotient2.denominateur = saisieDenominateur();

}
