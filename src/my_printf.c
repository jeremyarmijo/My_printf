/*
** EPITECH PROJECT, 2023
** miniprintf
** File description:
** bsdeprintf
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...)
{
    int z = 0;
    va_list args;

    va_start(args, format);
    while (format[z] != '\0') {
        flags_detection(args, format, &z);
        write_console(format, &z);
    }
    va_end(args);
    return z;
}
