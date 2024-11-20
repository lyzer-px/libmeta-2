/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strlen.c
*/

#include <stddef.h>
#include "meta_libc.h"

ssize_t meta_strlen(char const *str)
{
    ssize_t len = 0;

    if (str == NULL)
        return -META_ERR;
    for (; str[len]; len++);
    return len;
}
