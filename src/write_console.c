/*
** EPITECH PROJECT, 2023
** prntff
** File description:
** write
*/
#include <unistd.h>
#include "my.h"

int write_console(const char *format, int *z)
{
    if (format[*z] != '\0' && format[*z] != '%') {
        write(1, &format[*z], 1);
        *z = *z + 1;
    }
    return 0;
}
