/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC
    #define META_LIBC
    #include <stddef.h>
    #include <stdarg.h>
    #ifndef META_EXTFAIL
        #define META_EXTFAIL 84
    #endif
    #ifndef META_EXT_SUCCESS
        #define META_EXT_SUCCESS 0
    #endif

int meta_atoi(char const *str);
long meta_atol(char const *str);
long long meta_atoll(char const *str);

int meta_putchar(char const c);
int meta_putstr(char const *str);
int meta_puterr(char const *str);
int meta_put_nbr(int nb);
int meta_mprintf(const char *format, ...);

char *meta_strcpy(char *dest, const char *src);
char *meta_strncpy(char *dest, const char *src, unsigned int n);

size_t meta_strlen(char const *str);

int meta_strcmp(char const *a, char const *b);
int meta_strncmp(char const *a, char const *b, unsigned int n);
#endif