/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %e
*/
#include "my.h"

void display_output(int nb, int nbf, int count, char c)
{
    my_put_nbr(nb);
    my_putchar('.');
    my_put_nbr(nbf);
    my_putchar(c);
    my_putchar('+');
    if (count < 10) {
        my_putchar('0');
        my_put_nbr(count);
    } else {
        my_put_nbr(count);
    }
}
