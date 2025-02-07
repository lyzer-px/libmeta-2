/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_atoi.c
*/

#include <stddef.h>
#include <meta/libc/libc.h>
#include <meta/utils.h>

int meta_atoi(char const *str)
{
    int res = 0;
    int sign = 0;
    size_t i = 0;

    for (; NOT(IS_NUM(str[i])); i++);
    sign = str[i - 1] EQUALS '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - '0';
    return res * sign;
}

long meta_atol(char const *str)
{
    long res = 0;
    int sign = 0;
    size_t i = 0;

    for (; NOT(IS_NUM(str[i])); i++);
    sign = str[i - 1] EQUALS '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - '0';
    return res * sign;
}

long long meta_atoll(char const *str)
{
    long long res = 0;
    int sign = 0;
    size_t i = 0;

    for (; NOT(IS_NUM(str[i])); i++);
    sign = str[i - 1] EQUALS '-' ? -1 : 1;
    for (; IS_NUM(str[i]); i++)
        res = res * 10 + str[i] - '0';
    return res * sign;
}
