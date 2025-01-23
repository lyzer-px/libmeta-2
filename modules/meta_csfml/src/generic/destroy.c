/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** generic_destroy_.c
*/

#include <meta/CSFML/objects.h>
#include <meta/utils.h>
#include <stddef.h>

static void generic_destroy(object_t *object)
{
    FOREACH(METHODS) {
        if (METHODS[i].type EQUALS object->tag)
            METHODS[i].destructor(object);
    }
}

void meta_destroy(object_t *object)
{
    generic_destroy(object);
}
