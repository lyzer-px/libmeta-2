/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** a simple verion of meta_printf
*/

#include <stdarg.h>
#include "meta_libc.h"

static int check_flag(char flag, va_list arg)
{
    switch (flag) {
        case 'd':
            return meta_putnbr(va_arg(arg, int));
        case 'i':
            return meta_putnbr(va_arg(arg, int));
        case 's':
            return meta_putstr(va_arg(arg, char *));
        case 'c':
            return meta_putchar(va_arg(arg, int));
        case '%':
            return meta_putchar('%');
    }
    return -500;
}

int meta_mprintf(const char *format, ...)
{
    int i = 0;
    va_list arg;
    int count = 0;

    va_start(arg, format);
    for (; format[i]; i++) {
        if (format[i] == '%') {
            count += check_flag(format[i + 1], arg);
            i++;
            continue;
        }
        count += meta_putchar(format[i]);
    }
    va_end(arg);
    return count;
}