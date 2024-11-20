/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strstr.c
*/

#include <stddef.h>
#include "meta_libc.h"

char *meta_strstr(char *str, char const *to_find)
{
    ssize_t needle_len = meta_strlen(to_find);
    ssize_t size = meta_strlen(str);

    if (needle_len == META_ERR || size == META_ERR)
        return NULL;
    for (int i = 0; (i + needle_len <= size) && str[i]; i++)
        if (meta_strncmp(str + i, to_find, needle_len) == 0)
            return str + i;
    return NULL;
}