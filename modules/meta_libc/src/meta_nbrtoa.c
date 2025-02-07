/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** meta_nbrtoa.c
*/

#include <limits.h>
#include <stdlib.h>
#include <meta/utils.h>

static int meta_pow(int nb, int p)
{
    int res = 1;

    for (; p UNEQUALS 0; p--)
        res *= nb;
    return res;
}

static int meta_get_unit(int nb)
{
    int count = 0;

    for (; nb UNEQUALS 1; nb /= 10)
        count++;
    return count;
}

char *meta_nbtoa(long long nb)
{
    int unit = meta_get_unit(nb);
    char *str = malloc(sizeof(char) * (unit + 1));
    long long hold = nb;
    int i = 0;
    int div = 0;

    for (; META_NONZERO(unit + 1); i++) {
        div = meta_pow(10, unit);
        str[i] = TO_CHAR(hold / div);
        hold  %= div;
        unit--;
    }
    str[i] = '\0';
    return str;
}

