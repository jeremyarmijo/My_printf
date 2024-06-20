/*
** EPITECH PROJECT, 2023
** printf
** File description:
** branche if functions
*/
#include "my.h"

int flag_no_existe(const char *format, int *z)
{
    if ((format[*z] == '%' && format[*z + 1] == 'l'
    && format[*z + 2] == 'd') || (format[*z] == '%' && format[*z + 1] == 'l'
    && format[*z + 2] == 'i') || (format[*z] == '%' && format[*z + 1] == '.'
    && format[*z + 2] == 'f') || (format[*z] == '%' && format[*z + 1] == '.'
    && format[*z + 2] == 'F') || (format[*z] == '%' && format[*z + 2] == 'd')
    || (format[*z] == '%' && format[*z + 2] == 'i'))
        return 0;
    if (format[*z] == '%' && format[*z + 1] != 'c'
    && format[*z + 1] != 'o' && format[*z + 1] != 'i'
    && format[*z + 1] != 'd' && format[*z + 1] != 's'
    && format[*z + 1] != '%' && format[*z + 1] != 'x'
    && format[*z + 1] != 'X' && format[*z + 1] != 'f'
    && format[*z + 1] != 'u' && format[*z + 1] != 'e'
    && format[*z + 1] != 'F' && format[*z + 1] != 'E'
    && format[*z + 1] != 'G' && format[*z + 1] != 'g'){
        write(1, &format[*z], 1);
        return 1;
    }
    return 0;
}

void flags_detection(va_list args, const char *format, int *z)
{
    if (format[*z] == '%') {
        *z = *z + flag_no_existe(format, z);
        *z = *z + percent_s(args, format, z);
        *z = *z + percent_di(args, format, z);
        *z = *z + percent_c(args, format, z);
        *z = *z + percent_percent(format, z);
        *z = *z + percent_exa(args, format, z);
        *z = *z + percent_examaj(args, format, z);
        *z = *z + percent_oct(args, format, z);
        *z = *z + percent_f(args, format, z);
        *z = *z + percent_e(args, format, z);
        *z = *z + percent_u(args, format, z);
        *z = *z + percent_g(args, format, z);
    }
}
