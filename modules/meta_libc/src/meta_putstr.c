/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putstr.c
*/

#include <unistd.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>


ssize_t meta_putstr(char const *str)
{
    ssize_t ret = write(STDOUT_FILENO, str, meta_strlen(str));

    return ret < 0 ? META_ERR : ret;
}