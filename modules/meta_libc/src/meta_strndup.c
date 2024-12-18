/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strdup.c
*/

#include <stdlib.h>
#include <meta/libc/libc.h>

char *meta_strndup(char const *src, unsigned int n)
{
   char *dest = malloc(sizeof(char) * meta_strlen(src) + 1);

    if (dest == NULL || src == NULL)
        return NULL;
    return meta_strncpy(dest, src, n);
}