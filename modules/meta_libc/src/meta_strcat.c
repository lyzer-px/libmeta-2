/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include <string.h>
#include <meta/libc/libc.h>

char *meta_strcat(char *dest, const char *src)
{
    dest = meta_strcpy(dest + meta_strlen(dest), src);
    return dest;
}
