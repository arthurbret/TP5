#ifndef TP5_LIBRAIRIETP5_H
#define TP5_LIBRAIRIETP5_H

struct nombreRationnel
{
    int numerateur, denominateur;
};
int saisieNumerateur();
int saisieDenominateur();
int multiplication(int valeur1, int valeur2);
int addition(int num1, int num2, int denum1, int denum2, int numDenum);
void affichageNombreRationnel(int numerateur, int denominateur);

#endif //TP5_LIBRAIRIETP5_H
