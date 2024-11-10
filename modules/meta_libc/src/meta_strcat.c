/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

char *meta_strcat(char *dest, const char *src)
{
    dest = meta_strcpy(dest + meta_strlen(src), (char *)src);
    return dest;
}