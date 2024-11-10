/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stddef.h>

int meta_strncmp(char const *a, char const *b, unsigned int n)
{
    size_t i = 0;

    for (; a[i] && a[i] == b[i] && i < n; i++);
    return a[i] - b[i];
}