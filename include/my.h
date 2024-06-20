/*
** EPITECH PROJECT, 2023
** headers
** File description:
** function for my_printf
*/
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <pwd.h>

#ifndef MY
    #define MY
    #define EQUAL_PERCENT_1 format[*z] == '%' &&
    #define EQUAL_D_2 format[*z + 1] == 'l'
    #define EQUAL_I_3 && format[*z + 2] == 'i'

int percent_integer(const char *format, int *z, va_list args);
void my_notation_g(double nb);
void fonction_g(int entier, double nb, int nbentierdecimal);
void notation_g(double nb, int digitaftercoma
    , int digitaftercoma2, int entier);
int percent_g(va_list args, const char *format, int *z);
void my_notationg(double nb);
void fonction(int entier, double nb, int nbentierdecimal);
void notation(double nb, int digitaftercoma, int digitaftercoma2, int entier);
int my_put_float_int(double nb);
int flag_no_existe(const char *format, int *z);
void display_output_maj(int nb, int nbf, int count);
void my_put_nbrlong(long value);
void display_output(int nb, int nbf, int count, char c);
int percent_e(va_list args, const char *format, int *z);
void my_put_scientific_notation(double nb, char c);
int percent_u(va_list args, const char *format, int *z);
int my_put_long_int(unsigned int n);
int my_put_u(long nb);
int percent_f(va_list agrs, const char *format, int *z);
int my_put_float(double nb);
void flags_detection(va_list args, const char *format, int *z);
int write_console(const char *format, int *z);
int percent_s(va_list agrs, const char *format, int *z);
int percent_di(va_list args, const char *format, int *z);
int percent_c(va_list args, const char *format, int *z);
int percent_percent(const char *format, int *z);
int percent_exa(va_list args, const char *format, int *z);
int percent_examaj(va_list args, const char *format, int *z);
int percent_oct(va_list args, const char *format, int *z);
int my_printf(const char *format, ...);
int my_put_exa(int n);
int my_put_examaj(int n);
int my_put_oct(int i);
void my_putchar(char c);
int my_putstr(const char *str);
int my_put_nbr(int n);

#endif
