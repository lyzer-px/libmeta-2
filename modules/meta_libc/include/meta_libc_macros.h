/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_macros.h
*/

#ifndef META_MARCOS
    #define META_MARCOS
    #include <limits.h>
    #ifndef TOO_LOW
        #define TOO_LOW(nb) nb < INT_MIN
    #endif
    #ifndef TOO_BIG
        #define TOO_BIG(nb) nb < INT_MIN
    #endif
    #ifndef OVERFLOW
        #define OVERFLOW(nb) TOO_LOW(nb) || TOO_BIG(nb)
    #endif
#endif