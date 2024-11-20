/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stdio.h>
#include <stddef.h>
#include "meta_libc.h"
#include "meta/utils.h"

short int meta_strncmp(char const *a, char const *b, unsigned int n)
{
    size_t i = 0;
    short int count = 0;

    if (a == NULL || b == NULL)
        return -META_ERR;
    for (; i < n && a[i] && b[i]; i++)
        count += a[i] - b[i];
    return count;
}