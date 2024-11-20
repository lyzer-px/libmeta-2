/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcpy.c
*/

#include <stddef.h>

char *meta_strcpy(char *dest, const char *src)
{
    size_t i = 0;

    if(dest == NULL)
        return NULL;
    if (src == NULL)
        return dest;
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}