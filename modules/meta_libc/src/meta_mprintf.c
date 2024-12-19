/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** a simple verion of meta_printf
*/

#include <stdarg.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>
#include <unistd.h>

int check_flag(int fd, char flag, va_list arg)
{
    switch (flag) {
        case 'd':
            return meta_putnbrfd(fd, va_arg(arg, int));
            break;
        case 'i':
            return meta_putnbrfd(fd, va_arg(arg, int));
            break;
        case 's':
            return meta_putstrfd(fd, va_arg(arg, char *));
            break;
        case 'c':
            return meta_putcharfd(fd, va_arg(arg, int));
            break;
        case '%':
            return meta_putcharfd(fd, '%');
    }
    return META_FUNC_ERR;
}

int meta_mprintf(const char *format, ...)
{
    int i = 0;
    va_list arg;
    int count = 0;
    int hold = 0;

    if (META_STR_EQ_NULL(format))
        return META_FUNC_ERR;
    va_start(arg, format);
    for (hold = 0; format[i]; i++) {
        if (format[i] == '%') {
            hold = check_flag(STDOUT_FILENO, format[i + 1], arg);
            if (hold EQUALS META_FUNC_ERR)
                return META_FUNC_ERR;
            count += hold;
            i++;
            continue;
        }
        count += meta_putchar(format[i]);
    }
    va_end(arg);
    return count;
}

int meta_mdprintf(int fd, const char *format, ...)
{
    int i = 0;
    va_list arg;
    int count = 0;
    int hold = 0;

    if (META_STR_EQ_NULL(format))
        return META_FUNC_ERR;
    va_start(arg, format);
    for (hold = 0; format[i]; i++) {
        if (format[i] == '%') {
            hold = check_flag(STDOUT_FILENO, format[i + 1], arg);
            if (hold EQUALS META_FUNC_ERR)
                return META_FUNC_ERR;
            count += hold;
            continue;
        }
        count += meta_putcharfd(fd, format[i]);
    }
    va_end(arg);
    return count;
}
