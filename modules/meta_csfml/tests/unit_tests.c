/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include "meta/CSFML/wrapper.h"


Test(object_creation, non_null)
{
    object_t *object = meta_new_object(SFRENDERWINDOW);

    cr_assert_not_null(object);
    meta_destroy(object);
}
