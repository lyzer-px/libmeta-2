/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putnbr.c
*/

#include "meta_libc.h"
#include "meta/utils.h"


int meta_putnbr(int nb)
{
    nb *= nb < 0 ? -meta_putchar('-') : 1;
    if (nb / 10 == 0) {
        meta_putchar(nb + '0');
        return META_SUCCESS;
    }
    meta_putnbr(nb / 10);
    meta_putchar(nb % 10 + '0');
    return META_SUCCESS;
}