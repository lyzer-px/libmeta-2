/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putnbr.c
*/

#include <meta/libc/libc.h>
#include <meta/libc/utils.h>
#include <unistd.h>


int meta_putnbrfd(int fd, int nb)
{
    nb *= nb < 0 ? -meta_putchar('-') : 1;
    if (nb / 10 == 0) {
        meta_putcharfd(nb + '0');
        return META_SUCCESS;
    }
    meta_putnbrfd(nb / 10);
    meta_putcharfd(nb % 10 + '0');
    return META_SUCCESS;
}

int meta_putnbr(int nb)
{
    return meta_putnbrfd(STDOUT_FILENO, nb);
}
