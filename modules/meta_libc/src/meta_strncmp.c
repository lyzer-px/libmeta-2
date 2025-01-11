/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stdio.h>
#include <stddef.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>

ssize_t meta_strncmp(char const *a, char const *b, unsigned int n)
{
    size_t i = 0;
    short int count = 0;

    if (a EQUALS nullptr OR b EQUALS nullptr)
        return META_ERROR;
    for (; i < n AND a[i] AND b[i]; i++)
        count += a[i] - b[i];
    return count;
}