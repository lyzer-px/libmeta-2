/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_OOP
    #define META_OOP
    #include <stddef.h>
    #include <stdbool.h>
    #ifndef META_STR_NULL
        #define META_STR_NULL (*(meta_string_t *)0)
    #endif
    #ifndef META_STRARR_NULL
        #define META_STRARR_NULL (*(meta_str_arr_t *)0)
    #endif

typedef struct meta_str {
    char *str;
    size_t len;
    size_t byte_size;
} meta_string_t;

typedef struct meta_str_array {
    size_t size;
    size_t byte_size;
    meta_string_t *list;
} meta_str_arr_t;

size_t meta_get_arr_size(char **array);
void meta_destroy_str(meta_string_t *obj);
meta_string_t meta_new_string(char *content);
meta_str_arr_t meta_new_str_array(char **array);
void meta_destroy_str_arr(meta_str_arr_t *str_arr);
bool meta_strarr(char const *fetched, meta_str_arr_t *str_arr);
meta_string_t *meta_fill_str_array(meta_string_t *obj_arr, char **array);

#endif