/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %f
*/
#include "my.h"

int percent_f(va_list args, const char *format, int *z)
{
    if (format[*z] == '%' && format[*z + 1] == 'f'){
        my_put_float(va_arg(args, double));
        return 2;
    }
    if (format[*z] == '%' && format[*z + 1] == 'F'){
        my_put_float(va_arg(args, double));
        return 2;
    }
    if (format[*z] == '%' && format[*z + 1] == '.'
    && format[*z + 2] == 'f'){
        my_put_float_int(va_arg(args, double));
        return 3;
    }
    if (format[*z] == '%' && format[*z + 1] == '.'
    && format[*z + 2] == 'F'){
        my_put_float_int(va_arg(args, double));
        return 3;
    }
    return 0;
}
