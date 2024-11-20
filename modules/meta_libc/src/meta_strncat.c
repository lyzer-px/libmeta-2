/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include "meta_libc.h"

char *meta_strncat(char *dest, const char *src, unsigned int n)
{
    if (dest == NULL)
        return NULL;
    if (src == NULL)
        return dest;
    return meta_strncpy(dest + meta_strlen(dest), src, n);
}