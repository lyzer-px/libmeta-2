/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putnbr.c
*/

#include <unistd.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>


int meta_putnbrfd(int fd, int nb)
{
    nb *= nb < 0 ? -meta_putchar('-') : 1;
    if (nb / 10 == 0) {
        meta_putcharfd(fd, nb + '0');
        return META_SUCCESS;
    }
    meta_putnbrfd(fd, nb / 10);
    meta_putcharfd(fd, nb % 10 + '0');
    return META_SUCCESS;
}

int meta_putnbr(int nb)
{
    return meta_putnbrfd(STDOUT_FILENO, nb);
}
