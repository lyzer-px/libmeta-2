/*
** EPITECH PROJECT, 2024
** meta_oop
** File description:
** actors.c
*/

#include <stddef.h>
#include <stdbool.h>
#include "meta_oop.h"
#include "meta_libc.h"

bool meta_strarr(char const *fetched, meta_str_arr_t *str_arr)
{
    size_t fetched_len = meta_strlen(fetched);

    for (size_t i = 0; i < str_arr->size; i++)
        if (!meta_strncmp(meta_strstr(str_arr[i].list->str, fetched),
        fetched, fetched_len))
            return true;
    return false;
}

