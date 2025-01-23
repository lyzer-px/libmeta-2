/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** create.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <meta/CSFML/objects.h>
#include <meta/utils.h>

static object_t *memset_object(void)
{
    object_t *new_object = malloc(sizeof(object_t));

    if (new_object EQUALS nullptr)
        return nullptr;
    new_object->item = nullptr;
    new_object->tag = GHOST;
    return new_object;
}

static void *meta_object_create(size_t type_id)
{
    FOREACH(METHODS) {
        if (METHODS[i].type EQUALS type_id)
            return METHODS[i].constructor();
    }
    return nullptr;
}

object_t *meta_new_object(size_t type_id)
{
    object_t *new_object = memset_object();

    if (new_object EQUALS nullptr)
        return nullptr;
    new_object->item = meta_object_create(type_id);
    if (new_object EQUALS nullptr)
        return nullptr;
    new_object->tag = type_id;
    return new_object;
}
