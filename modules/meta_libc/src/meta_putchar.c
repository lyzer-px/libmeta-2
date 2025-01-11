/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putchar.c
*/

#include <unistd.h>
#include <meta/libc/utils.h>

ssize_t meta_putcharfd(int fd, char const c)
{
    ssize_t ret = write(fd, &c, 1);

    return ret < 0 ? META_FUNC_ERR : ret;
}

ssize_t meta_putchar(char const c)
{
    return meta_putcharfd(STDOUT_FILENO, c);
}
