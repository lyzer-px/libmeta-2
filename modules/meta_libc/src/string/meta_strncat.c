/*
** EPITECH PROJECT, 2025
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include "meta/utils.h"
#include "meta/libc/string.h"

char *meta_strncat(char *dest, const char *src, unsigned int n)
{
    if (META_STR_EQ_NULL(dest))
        return nullptr;
    dest = meta_strncpy(dest + meta_strlen(dest), src, n);
    return dest;
}
