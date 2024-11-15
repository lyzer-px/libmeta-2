/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stdio.h>
#include <stddef.h>

int meta_strncmp(char const *a, char const *b, unsigned int n)
{
    size_t i = 0;
    int count = 0;

    for (; i < n && a[i] && b[i]; i++)
        count += a[i] - b[i];
    return count;
}