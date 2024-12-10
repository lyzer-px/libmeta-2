/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** nodes.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "linked_lists.h"

linked_list_t *create_node(void)
{
    linked_list_t *node = malloc(sizeof(linked_list_t));

    if (!node)
        return NULL;
    node->data = NULL;
    node->next = NULL;
    node->prev = NULL;
    node->index = 0;
    return node;
}

linked_list_t *push_front(void *data, linked_list_t *head)
{
    linked_list_t *node = create_node();

    if (!node)
        return NULL;
    node->data = data;
    node->next = head;
    head->prev = node;
    node->index = head->index + 1;
    return node;
}

linked_list_t *delete_node(linked_list_t *head, unsigned int index)
{
    linked_list_t *current = head;

    for (; current && current->next && current->index != index;
    current = current->next);
    current->prev->next = current->next;
    current->next->prev = current->prev;
    free(current);
    return head;
}

void display_list(linked_list_t *list)
{
    for (linked_list_t *current = list; current->next; current = current->next)
        my_putstr((char const *)(current->data));
}

void destroy_list(linked_list_t *head)
{
    linked_list_t *current = head->next;

    for (; current != NULL; current = current->next) {
        free(current->prev);
        if (current->next != NULL)
            continue;
        free(current);
        break;
    }
}
