/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_strlen.c
*/

#include <stddef.h>
#include <unistd.h>
#include "meta/utils.h"
#include "meta/CSFML/objects.h"

size_t meta_strlen(char const *str)
{
    ssize_t len = 0;

    if (str == nullptr)
        return META_FUNC_ERR;
    for (; str[len]; len++);
    return len;
}
