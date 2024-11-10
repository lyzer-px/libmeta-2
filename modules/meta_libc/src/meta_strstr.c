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

    for (int i = 0; str[i] && (i + needle_len <= size); i++)
        if (!meta_strncmp(str + i, to_find, needle_len))
            return str + i;
    return NULL;
}