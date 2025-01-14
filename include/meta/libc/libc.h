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
    #include <stdbool.h>
    #include <unistd.h>

int meta_atoi(char const *str);
long meta_atol(char const *str);
long long meta_atoll(char const *str);

ssize_t meta_putchar(char const c);
ssize_t meta_putcharfd(int fd, char const c);

ssize_t meta_putstr(char const *str);
ssize_t meta_putstrfd(int fd, char const *str);

ssize_t meta_puterr(char const *str);

int meta_putnbr(int nb);
int meta_putnbrfd(int fd, int nb);

int meta_mprintf(const char *format, ...);
int meta_mdprintf(int fd, const char *format, ...);

char *meta_strcpy(char *dest, const char *src);
char *meta_strncpy(char *dest, const char *src, unsigned int n);

char *meta_strcat(char *dest, const char *src);
char *meta_strncat(char *dest, const char *src, unsigned int n);


char *meta_strdup(char const *src);
char *meta_strndup(const char *src, unsigned int n);

char *meta_strstr(char *str, char const *to_find);

ssize_t meta_strlen(char const *str);

ssize_t meta_strcmp(char const *a, char const *b);
ssize_t meta_strncmp(char const *a, char const *b, unsigned int n);

char **meta_word_array_delim(char *str, char delim);
#endif
