/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_putstr.c
*/

#include <unistd.h>
#include "meta/utils.h"
#include "meta/libc/string.h"


ssize_t meta_putstrfd(int fd, char const *str)
{
    ssize_t ret = write(fd, str, meta_strlen(str));

    return ret EQUALS META_FUNC_ERR ? META_FUNC_ERR : ret;
}

ssize_t meta_putstr(char const *str)
{
    return meta_putstrfd(STDOUT_FILENO, str);
}
