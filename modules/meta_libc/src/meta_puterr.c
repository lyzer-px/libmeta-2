/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_puterr.c
*/

#include <unistd.h>

int meta_puterr(char const *str)
{
    return write(2, str, meta_strlen(str));
}