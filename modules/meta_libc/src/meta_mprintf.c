/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** a simple verion of my_printf
*/

#include <stdarg.h>
#include "my.h"

int check_flag(int fd, char flag, va_list arg)
{
    switch (flag) {
        case 'd':
            return my_put_nbrfd(fd, va_arg(arg, int));
            break;
        case 'i':
            return my_put_nbrfd(fd, va_arg(arg, int));
            break;
        case 's':
            return my_putstrfd(fd, va_arg(arg, char *));
            break;
        case 'c':
            return my_putcharfd(fd, va_arg(arg, int));
            break;
        case '%':
            return my_putcharfd(fd, '%');
    }
    return -500;
}

int mini_printf(const char *format, ...)
{
    int i = 0;
    va_list arg;
    int count = 0;

    va_start(arg, format);
    for (; format[i]; i++) {
        if (format[i] == '%') {
            count += check_flag(1, format[i + 1], arg);
            i++;
            continue;
        }
        count += my_putchar(format[i]);
    }
    va_end(arg);
    return count;
}

int mini_dprintf(int fd, const char *format, ...)
{
    int i = 0;
    va_list arg;
    int count = 0;

    va_start(arg, format);
    for (; format[i]; i++) {
        if (format[i] == '%') {
            count += check_flag(fd, format[i + 1], arg);
            i++;
            continue;
        }
        count += my_putcharfd(fd, format[i]);
    }
    va_end(arg);
    return count;
}
