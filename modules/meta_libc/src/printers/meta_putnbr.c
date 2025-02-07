/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_putnbr.c
*/

#include <unistd.h>
#include <meta/libc/libc.h>
#include <meta/utils.h>

int meta_putnbrfd(int fd, int nb)
{
    nb *= nb < 0 ? -meta_putchar('-') : 1;
    if (nb / 10 EQUALS 0) {
        if (meta_putcharfd(fd, nb + '0') EQUALS META_FUNC_ERR)
            return META_FUNC_ERR;
        return META_SUCCESS;
    }
    if (meta_putnbrfd(fd, nb / 10) EQUALS META_FUNC_ERR)
        return META_FUNC_ERR;
    if (meta_putcharfd(fd, nb % 10 + '0') EQUALS META_FUNC_ERR)
        return META_FUNC_ERR;
    return META_SUCCESS;
}

int meta_putnbr(int nb)
{
    return meta_putnbrfd(STDOUT_FILENO, nb);
}
