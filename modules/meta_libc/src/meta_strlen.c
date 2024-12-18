/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_strlen.c
*/

#include <stddef.h>
#include <unistd.h>
#include <meta/libc/utils.h>

size_t meta_strlen(char const *str)
{
    ssize_t len = 0;

    for (; str[len]; len++);
    return len;
}
