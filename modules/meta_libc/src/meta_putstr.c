/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_putstr.c
*/

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}