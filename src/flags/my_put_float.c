/*
** EPITECH PROJECT, 2023
** my printf
** File description:
** put float
*/
#include "my.h"

int my_put_float(double nb)
{
    int tmp = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    tmp = nb;
    my_put_nbrlong(tmp);
    nb = (nb - tmp) * 1000000 + 0.5;
    my_putchar('.');
    tmp = nb;
    my_put_nbrlong(tmp);
    return 0;
}

int my_put_float_int(double nb)
{
    long value = nb;

    if (value < 0) {
        my_putchar('-');
        value = -value;
    }
    if (value >= 10) {
        my_put_nbrlong(value / 10);
    }
    my_putchar(value % 10 + 48);
    return 0;
}
