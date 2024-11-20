/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stddef.h>
#include <unistd.h>
#include "meta_libc.h"

short int meta_strcmp(char const *a, char const *b)
{
    size_t i = 0;
    short int count = 0;

    if (a == NULL || b == NULL)
        return -META_ERR;
    for (; a[i] && b[i]; i++)
        count += a[i] - b[i];
    return count;
}