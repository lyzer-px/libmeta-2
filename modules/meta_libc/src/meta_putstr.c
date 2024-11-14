/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putstr.c
*/

#include <unistd.h>

int meta_putstr(char const *str)
{
    return write(1, str, meta_strlen(str));
}