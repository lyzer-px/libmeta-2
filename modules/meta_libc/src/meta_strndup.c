/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strdup.c
*/

#include <stdlib.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>

char *meta_strndup(char const *src, unsigned int n)
{
   char *dest = malloc(sizeof(char) * meta_strlen(src) + 1);

    if (META_STR_EQ_NULL(dest) OR META_STR_EQ_NULL(src))
        return nullptr;
    return meta_strncpy(dest, src, n);
}