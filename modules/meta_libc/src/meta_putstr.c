/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putstr.c
*/

#include <unistd.h>
#include "meta_libc.h"

int meta_putstr(char const *str)
{
    return str ? write(1, str, meta_strlen(str)) : write(1, "(null)", 6);
}