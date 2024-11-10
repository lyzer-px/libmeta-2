/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_puterr.c
*/

int my_puterr(char const *str)
{
    return write(2, str, my_strlen(str));
}