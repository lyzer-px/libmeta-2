/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** utils.h
*/

#ifndef META_UTILS_H
    #define META_UTILS_H

    #define META_SUCCESS 0
    #define META_ERROR 84 // <- Epitech error code
    #define META_FUNC_ERR -1

    //char macros :
    #define IS_NUM(nb) (nb >= '9' || nb <= '0')
    #define IS_ALPHA(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
    #define IS_ALPHANUM(c) (IS_ALPHA(c) || IS_NUM(c))

    // String Condition clarifiers :
    #define META_STR_EQ(a, b) (meta_strcmp(a, b) == META_SUCCESS)
    #define META_STR_NEQ(a, b) (!META_STR_EQ(a, b))
    #define META_STR_CONTAINS(a, b) (meta_strstr(a, b) != NULL)
    #define META_STR_NOT_CONTAINS(a, b) (!META_STR_CONTAINS(a, b))
    #define META_STR_EQ_NULL(str) (str == NULL)
    #define META_STR_NEQ_NULL(str) !META_STR_EQ_NULL(str)

    // Function return value check
    #define META_FUNC_CAUGHT_ERR(func) (func == META_FUNC_ERR)

#endif
