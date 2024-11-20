/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_puterr.c
*/

#include <unistd.h>
#include "meta_libc.h"

ssize_t meta_puterr(char const *str)
{
    ssize_t ret = write(STDERR_FILENO, str, meta_strlen(str));

    return ret < 0 ? META_ERR : ret;
}