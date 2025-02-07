/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC
    #define META_LIBC
    #include <stddef.h>
    #include <stdarg.h>
    #include <stdbool.h>
    #include <unistd.h>

int meta_atoi(char const *str);
long meta_atol(char const *str);
long long meta_atoll(char const *str);

#endif
