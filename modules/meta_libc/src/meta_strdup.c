/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strdup.c
*/

#include <stdlib.h>
#include "meta_libc.h"

char *meta_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * meta_strlen(src) + 1);

    if (dest == NULL || src == NULL)
        return NULL;
    return meta_strcpy(dest, src);
}