/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strdup.c
*/

#include <stdlib.h>
#include "meta_libc.h"

char *meta_strndup(char const *src, unsigned int n)
{
    if (!src)
        return NULL;
    return meta_strncpy(malloc(sizeof(char) * meta_strlen(src) + 1), src, n);
}