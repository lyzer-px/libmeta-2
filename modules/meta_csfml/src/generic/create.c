/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** create.c
*/

#include <meta/CSFML/objects.h>

void *generic_create(int type_id)
{
    return METHODS[type_id].constructor();
}