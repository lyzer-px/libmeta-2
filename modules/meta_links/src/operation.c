/*
** EPITECH PROJECT, 2024
** organized
** File description:
** operation.c
*/

#include "my.h"
#include "linked_lists.h"

void rev_list_display(meta_list_t *head)
{
    meta_list_t *actual = head;

    for (; actual->next; actual = actual->next);
    for (; actual->prev; actual = actual->prev)
        mini_printf("%s n°%d - %s\n", actual->type,
        actual->index, (char *)(actual->data));
}
