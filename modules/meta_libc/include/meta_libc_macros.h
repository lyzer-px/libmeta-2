/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_macros.h
*/

#ifndef META_MARCOS
    #define META_MARCOS
    #include <limits.h>
    #ifndef IS_ALPHA
        #define IS_ALPHA(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    #endif
    #ifndef IS_NUM
        #define IS_NUM(nb) (nb >= '0' && nb <= '9')
    #endif
    #ifndef IS_ALPHANUM
        #define IS_ALPHANUM(c) IS_ALPHA(c) || IS_NUM(c)
    #endif
    #ifndef OVERFLOW
        #define OVERFLOW(nb) (long)nb < (long)INT_MIN || (long)nb > (long)INT_MAX
    #endif
    #ifndef IS_NEG
        #define IS_NEG(nb) nb < 0
    #endif
#endif