/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_puterr.c
*/

#include <unistd.h>
#include "meta/libc/string.h"
#include "meta/utils.h"

ssize_t meta_puterr(char const *str)
{
    ssize_t ret = write(STDERR_FILENO, str, meta_strlen(str));

    return ret EQUALS META_FUNC_ERR ? META_FUNC_ERR : ret;
}
