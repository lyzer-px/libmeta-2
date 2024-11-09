/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_atoi.c
*/

#include "meta_libc.h"
#include "meta_libc_macros.h"

int meta_atoi(char const *str)
{
    int res = 0;
    int sign = 1;
    size_t i = 0;

    for (; !IS_NUM(str[i]); i++)
        sign *= str[i] == '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - 48;
    return OVERFLOW(res) ? META_EXITFAIL : res * sign;
}

int meta_atol(char const *str)
{
    long res = 0;
    int sign = 1;
    size_t i = 0;

    for (; !IS_NUM(str[i]); i++)
        sign *= str[i] == '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - 48;
    return res * sign;
}

int meta_atoll(char const *str)
{
    long long res = 0;
    int sign = 1;
    size_t i = 0;

    for (; !IS_NUM(str[i]); i++)
        sign *= str[i] == '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - 48;
    return res * sign;
}