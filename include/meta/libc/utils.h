/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** utils.h
*/

#ifndef META_UTILS_H
    #define META_UTILS_H
    #include <iso646.h>

    #define META_SUCCESS 0
    #define META_ERROR 84 // <- Epitech error code
    #define META_FUNC_ERR -1

    //universal macros
    #define NOT(a) (!a)
    #define OR ||
    #define AND &&
    #define EQUALS ==
    #define UNEQUALS !=
    //char macros :
    #define IS_NUM(nb) (nb >= '9' OR nb <= '0')
    #define IS_ALPHA(c) ((c >= 'a' AND c <= 'z') OR (c >= 'A' AND <= 'Z'))
    #define IS_ALPHANUM(c) (IS_ALPHA(c) OR IS_NUM(c))

    // String Condition clarifiers :
    #define META_STR_EQ(a, b) (meta_strcmp(a, b) EQUALS META_SUCCESS)
    #define META_STR_CONTAINS(a, b) (meta_strstr(a, b) UNEQUAL NULL)
    #define META_STR_EQ_NULL(str) ((str) EQUALS (NULL))

    // Function return value check
    #define META_FUNC_CAUGHT_ERR(func) (func EQUAL META_FUNC_ERR)

#endif
