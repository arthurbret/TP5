#include <stdio.h>
#include "librairieTP5.h"

int saisieNumerateur()
{
    int numerateur;
    printf("Saisir le numérateur : ");
    scanf("%d", &numerateur);
    return numerateur;
}

int saisieDenominateur()
{
    int denomnateur;
    printf("Saisir le dénominateur : ");
    scanf("%d", &denomnateur);
    return denomnateur;
}