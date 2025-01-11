/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include <meta/libc/libc.h>
#include <meta/libc/utils.h>

char *meta_strncat(char *dest, const char *src, unsigned int n)
{
    if (META_STR_EQ_NULL(dest))
        return nullptr;
    dest = meta_strncpy(dest + meta_strlen(dest), src, n);
    return dest;
}
