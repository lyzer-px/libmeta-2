/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** generic_destroy_.c
*/

#include <meta/CSFML/objects.h>

void generic_destroy(void *data, int type_id)
{
    METHODS[type_id].destructor(data);
}
