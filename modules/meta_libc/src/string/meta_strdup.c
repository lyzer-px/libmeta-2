/*
** EPITECH PROJECT, 2025
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strdup.c
*/

#include <stdlib.h>
#include "meta/utils.h"
#include "meta/libc/string.h"

char *meta_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * meta_strlen(src) + 1);

    if (dest EQUALS nullptr OR src EQUALS nullptr)
        return nullptr;
    return meta_strcpy(dest, src);
}
