/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcpy.c
*/

#include <stddef.h>

char *meta_strncpy(char *dest, const char *src, unsigned int n)
{
    if (!src)
        return NULL;
    for (size_t i = 0; src[i] && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}