/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcpy.c
*/

#include <meta/libc/utils.h>
#include <stddef.h>

char *meta_strncpy(char *dest, const char *src, unsigned int n)
{
    size_t i = 0;

    if (dest EQUALS nullptr)
        return nullptr;
    if (src EQUALS nullptr)
        return dest;
    for (; src[i] AND i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
