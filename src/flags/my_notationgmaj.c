/*
** EPITECH PROJECT, 2023
** printf
** File description:
** branche if functions
*/
#include "my.h"

void notation_g(double nb, int digitaftercoma, int digitaftercoma2, int entier)
{
    if (nb >= 100000 && nb < 999999 && digitaftercoma >= 5) {
        my_put_nbr(entier + 1);
        return;
    } else if (nb >= 100000 && nb < 999999 && digitaftercoma <= 5) {
        my_put_nbr(entier);
        return;
    }
    if (digitaftercoma2 >= 5 && nb < 100000) {
        digitaftercoma += 1;
        my_put_nbr(entier);
        my_putchar('.');
        my_put_nbr(digitaftercoma);
        return;
    } else if (digitaftercoma2 < 5 && nb < 100000) {
        my_put_nbr(entier);
        my_putchar('.');
        my_put_nbr(digitaftercoma);
    return;
    }
}

void fonction_g(int entier, double nb, int nbentierdecimal)
{
    int puissance = 0;

    for (int i = 0; entier != 0; i++){
        entier /= 10;
        nb /= 10;
        puissance = i;
    }
    nb = nb * 10;
    entier = nb;
    nb = nb - entier;
    for (int x = 0; x < 5; x++) {
        nb *= 10;
    }
    nbentierdecimal = nb;
    my_put_nbr(entier);
    my_putchar('.');
    my_put_nbr(nbentierdecimal + 1);
    my_putstr("E+0");
    my_put_nbr(puissance);
}

void my_notation_g(double nb)
{
    int entier = nb;
    double decimal = nb - entier;
    int digitaftercoma = decimal * 10;
    int digitaftercoma2 = 0;
    int nbentierdecimal = 0;

    decimal = decimal * 10;
    decimal = decimal - digitaftercoma;
    decimal = decimal * 10;
    digitaftercoma2 = decimal;
    notation_g(nb, digitaftercoma, digitaftercoma2, entier);
    if (nb > 999999){
        fonction_g(entier, nb, nbentierdecimal);
        return;
    }
}
