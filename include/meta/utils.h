/*
** EPITECH PROJECT, 2025
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
    #define META_MAX_SIZE 256
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
    #define META_STR_CONTAINS(a, b) (meta_strstr((a), (b)) UNEQUALS nullptr)
    #define META_STR_EQ_NULL(str) ((str) EQUALS (nullptr))

    // Function return value check
    #define META_FUNC_CAUGHT_ERR(func) (func EQUAL META_FUNC_ERR)

    // number related macros
    #define META_NONZERO(nb) ((nb) UNEQUALS 0)

    #define TO_CHAR(nb) (nb + '0')
    #define TO_INT(c) (c - '0')

    #define BREAKPOINT(eval, ret) if ((eval)) return (ret)

#endif
