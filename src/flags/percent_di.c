/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent d,i
*/
#include "my.h"

int percent_integer(const char *format, int *z, va_list args)
{
    if ((format[*z] == '%' && format[*z + 2] == 'd')
    || (format[*z] == '%' && format[*z + 2] == 'i')){
        my_put_nbr((int)va_arg(args, int));
        return 3;
    }
    return 0;
}

int percent_di(va_list args, const char *format, int *z)
{
    if ((format[*z] == '%' && format[*z + 1] == 'd')
    || (format[*z] == '%' && format[*z + 1] == 'i')){
        my_put_nbr((int)va_arg(args, int));
        return 2;
    }
    if (percent_integer(format, z, args) == 3){
        return 3;
    }
    if ((format[*z] == '%' && format[*z + 1] == 'l')
    && (format[*z + 2] == 'd')){
        my_put_nbrlong((long)va_arg(args, long));
        return 3;
    }
    if (EQUAL_PERCENT_1 EQUAL_D_2 EQUAL_I_3){
        my_put_nbrlong((long)va_arg(args, long));
        return 3;
    }
    return 0;
}
