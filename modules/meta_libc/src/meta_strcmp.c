/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stddef.h>

int meta_strcmp(char const *a, char const *b)
{
    size_t i = 0;

    for (; a[i] && a[i] == b[i]; i++);
    return a[i] - b[i];
}