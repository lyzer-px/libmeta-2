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
    if (!src)
        return NULL;
    return meta_strcpy(malloc(sizeof(char) * meta_strlen(src) + 1), src);
}