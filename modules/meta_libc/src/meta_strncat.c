/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include <meta/libc/libc.h>

char *meta_strncat(char *dest, const char *src, unsigned int n)
{
    dest = meta_strncpy(dest + meta_strlen(dest), src, n);
    return dest;
}