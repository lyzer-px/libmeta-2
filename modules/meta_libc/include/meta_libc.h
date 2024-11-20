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
    #include <unistd.h>
    #ifndef META_ERR
        #define META_ERR 84
    #endif
    #ifndef META_SUCCESS
        #define META_SUCCESS 0
    #endif

int meta_atoi(char const *str);
long meta_atol(char const *str);
long long meta_atoll(char const *str);

ssize_t meta_putchar(char const c);
ssize_t meta_putstr(char const *str);
ssize_t meta_puterr(char const *str);
int meta_putnbr(int nb);
int meta_mprintf(const char *format, ...);

char *meta_strcpy(char *dest, const char *src);
char *meta_strncpy(char *dest, const char *src, unsigned int n);

char *meta_strcat(char *dest, const char *src);
char *meta_strncat(char *dest, const char *src, unsigned int n);


char *meta_strdup(char const *src);
char *meta_strndup(const char *src, unsigned int n);

char *meta_strstr(char *str, char const *to_find);

ssize_t meta_strlen(char const *str);

short int meta_strcmp(char const *a, char const *b);
short int meta_strncmp(char const *a, char const *b, unsigned int n);
#endif