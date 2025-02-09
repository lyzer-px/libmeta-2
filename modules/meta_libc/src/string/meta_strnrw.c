/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** meta_strnrw.c
*/

#include "meta/libc/string.h"
#include "meta/utils.h"

char *meta_strnrw(unsigned int fwd, char *str, unsigned bkwd)
{
    ssize_t len = meta_strlen(str);

    if (len == META_FUNC_ERR || bkwd > len || fwd > len)
        return str;
    str[len - bkwd] = '\0';
    str += fwd;
    return str;
}
