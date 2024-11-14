/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strstr.c
*/

#include <stddef.h>
#include "meta_libc.h"

char *meta_strstr(char *str, char const *to_find)
{
    int needle_len = meta_strlen(to_find);
    int size = meta_strlen(str);

    for (int i = 0; (i + needle_len <= size) && str[i]; i++)
        if (!meta_strncmp(str + i, to_find, needle_len))
            return str + i + needle_len;
    return NULL;
}