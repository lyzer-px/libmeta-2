/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putchar.c
*/

#include <unistd.h>

int my_putchar(char const c)
{
    return write(1, &c, 1);
}