/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stddef.h>
#include <unistd.h>
#include <meta/libc/utils.h>

ssize_t meta_strcmp(char const *a, char const *b)
{
    size_t i = 0;
    short int count = 0;

    if (META_STR_EQ_NULL(a) OR META_STR_EQ_NULL(b))
        return META_FUNC_ERR;
    for (; a[i] AND b[i]; i++)
        count += a[i] - b[i];
    return count;
}
