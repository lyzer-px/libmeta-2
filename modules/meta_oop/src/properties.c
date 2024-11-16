/*
** EPITECH PROJECT, 2024
** meta_oop
** File description:
** properties.c
*/

#include <stdlib.h>
#include <stdbool.h>
#include "meta_libc.h"
#include "meta_oop.h"

size_t meta_get_arr_size(char **array)
{
    size_t size = 0;

    for (; array[size]; size++);
    return size;
}

meta_string_t meta_new_string(char *str)
{
    meta_string_t object = {0};

    object.str = meta_strdup(str);
    object.len = meta_strlen(str);
    object.byte_size = sizeof(char) * object.len;
    return object;
}

meta_string_t *meta_fill_str_array(meta_string_t *obj_arr, char **array)
{
    size_t i = 0;

    for (; array[i]; i++)
        obj_arr[i] = meta_new_string(array[i]);
    return obj_arr;
}

meta_str_arr_t meta_new_str_array(char **array)
{
    meta_str_arr_t str_arr = {0};
    size_t size = meta_get_arr_size(array);
    size_t byte_size = sizeof(meta_string_t) * size;
    meta_string_t *obj_arr = malloc(byte_size + 1);

    str_arr.size = size;
    str_arr.byte_size = byte_size;
    str_arr.list = meta_fill_str_array(obj_arr, array);
    return str_arr;
}

void meta_destroy_str(meta_string_t *obj)
{
    if (obj->str != NULL)
        free(obj->str);
    obj->len = 0;
    obj->byte_size = 0;
}

void meta_destroy_str_arr(meta_str_arr_t *str_arr)
{
    for (size_t i = 0; i < str_arr->size; i++)
        meta_destroy_str(&(str_arr->list[i]));
}
