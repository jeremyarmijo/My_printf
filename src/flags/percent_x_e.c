/*
** EPITECH PROJECT, 2023
** printf
** File description:
** exa
*/
#include "my.h"

int percent_e(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'e') {
        my_put_scientific_notation(va_arg(args, double), 'e');
        cpt += 2;
    }
    if (format[*z] == '%' && format[*z + 1] == 'E') {
        my_put_scientific_notation(va_arg(args, double), 'E');
        cpt += 2;
    }
    return (cpt);
}

int percent_exa(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'x'){
        my_put_exa((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}

int percent_examaj(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'X'){
        my_put_examaj((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
