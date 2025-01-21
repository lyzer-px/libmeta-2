/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include <meta/libc/libc.h>
#include <meta/utils.h>

char *meta_strcat(char *dest, const char *src)
{
    if (META_STR_EQ_NULL(dest))
        return nullptr;
    dest = meta_strcpy(dest + meta_strlen(dest), src);
    return dest;
}
