/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** printers.h
*/

#ifndef META_PRINTERS_H
    #define META_PRINTERS_H
    #include <unistd.h>

ssize_t meta_putchar(char const c);
ssize_t meta_putcharfd(int fd, char const c);

ssize_t meta_putstr(char const *str);
ssize_t meta_putstrfd(int fd, char const *str);

ssize_t meta_puterr(char const *str);

int meta_putnbr(int nb);
int meta_putnbrfd(int fd, int nb);

int meta_mprintf(const char *format, ...);
int meta_mdprintf(int fd, const char *format, ...);

char **meta_strsplt(char *str, char delim);
#endif
