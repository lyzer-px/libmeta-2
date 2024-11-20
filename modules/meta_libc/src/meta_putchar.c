/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putchar.c
*/

#include <unistd.h>
#include "meta_libc.h"

ssize_t meta_putchar(char const c)
{
    ssize_t ret = write(1, &c, 1);

    return ret < 0 ? -META_ERR : ret;
}