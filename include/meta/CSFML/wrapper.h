/*
** EPITECH PROJECT, 2025
** libmeta
** File description:
** wrapper.h
*/

#ifndef WRAPPER_H
    #define WRAPPER_H
    #include "meta/CSFML/basics.h"
    #include "meta/CSFML/objects.h"

object_t *meta_new_object(size_t type_id);
void meta_destroy(object_t *object);

#endif
