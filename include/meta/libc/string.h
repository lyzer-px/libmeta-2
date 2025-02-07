/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** printers.h
*/

#ifndef META_STRING_H
    #define META_STRING_H
    #include <unistd.h>
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
#endif
