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
    #ifndef TOO_LOW
        #define TOO_LOW(nb) nb < INT_MIN
    #endif
    #ifndef TOO_BIG
        #define TOO_BIG(nb) nb < INT_MIN
    #endif
    #ifndef OVERFLOW
        #define OVERFLOW(nb) TOO_LOW(nb) || TOO_BIG(nb)
    #endif
    #ifndef IS_NEG
        #define IS_NEG(nb) nb < 0
    #endif
#endif