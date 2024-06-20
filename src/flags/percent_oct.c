/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent oct
*/
#include "my.h"

int percent_oct(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'o'){
        my_put_oct((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}

int my_put_oct(int n)
{
    long min = 37777777778;

    if (n < 0) {
        min = min + n;
        my_put_nbrlong(min);
        return 0;
    }
    if (n >= 0 && n < 8) {
        my_putchar(n + 48);
    } else {
        my_put_oct(n / 8);
        my_putchar(n % 8 + 48);
    }
    return 1;
}

void my_put_nbrlong(long value)
{
    if (value < 0) {
        my_putchar('-');
        value = -value;
    }
    if (value >= 10) {
        my_put_nbrlong(value / 10);
    }
    my_putchar(value % 10 + 48);
}
