/*
** EPITECH PROJECT, 2025
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcpy.c
*/

#include <stddef.h>
#include "meta/utils.h"

char *meta_strcpy(char *dest, const char *src)
{
    size_t i = 0;

    if (dest EQUALS nullptr)
        return nullptr;
    if (src EQUALS nullptr)
        return dest;
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
