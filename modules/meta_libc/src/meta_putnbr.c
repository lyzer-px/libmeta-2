/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putnbr.c
*/

#include "meta_libc.h"

int meta_put_nbr(int nb)
{
    nb *= nb < 0 ? -meta_putchar('-') : 1;
    if (nb / 10 == 0) {
        meta_putchar(nb + '0');
        return 0;
    }
    meta_put_nbr(nb / 10);
    meta_putchar(nb % 10 + '0');
    return 0;
}