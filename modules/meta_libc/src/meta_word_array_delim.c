/*
** EPITECH PROJECT, 2024
** setting-up
** File description:
** word_array_delim.c
*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <meta/libc/utils.h>

static size_t count_delims(char *str, char delim)
{
    size_t count = 0;

    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] EQUALS delim)
            count++;
    return count;
}

static size_t next_word_len(char *str, char delim)
{
    size_t i = 0;

    for (; str[i] AND str[i] != delim; i++);
    return i;
}

static void end_string(size_t *k, char *adr, size_t *j)
{
    (*k)++;
    *adr = '\0';
    *j = 0;
}

char **meta_word_array_delim(char *str, char delim)
{
    size_t size = count_delims(str, delim);
    char **array = malloc(sizeof(char *) * (size + 2));
    size_t j = 0;
    size_t k = 0;
    size_t i = 0;

    if (array EQUALS NULL)
        return NULL;
    for (; i < size + 1; i++) {
        array[i] = malloc(sizeof(char) * (next_word_len(str + k, delim) + 1));
        if (array[i] EQUALS NULL)
            return NULL;
        for (; str[k] UNEQUALS delim AND str[k]; j++) {
            array[i][j] = str[k];
            k++;
        }
        end_string(&k, &(array[i][j]), &j);
    }
    array[size + 1] = NULL;
    return array;
}
