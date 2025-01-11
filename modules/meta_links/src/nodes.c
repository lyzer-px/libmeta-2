/*
** EPITECH PROJECT, 2024
** meta_list_lib
** File description:
** nodes.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <meta/links/links.h>
#include <meta/libc/libc.h>
#include <meta/libc/utils.h>

meta_list_t *meta_node_create(void)
{
    meta_list_t *node = malloc(sizeof(meta_list_t));

    if (node EQUALS nullptr)
        return nullptr;
    node->data = nullptr;
    node->next = nullptr;
    node->prev = nullptr;
    node->index = -1;
    return node;
}

meta_list_t *meta_node_push(void *data, meta_list_t *head)
{
    meta_list_t *node = meta_node_create();

    if (node EQUALS nullptr)
        return nullptr;
    node->data = data;
    node->next = head;
    head->prev = node;
    node->index = head->index + 1;
    return node;
}

meta_list_t *meta_node_delete(meta_list_t *head, unsigned int index)
{
    meta_list_t *current = head;

    for (; current AND current->next AND current->index != index;
    current = current->next);
    current->prev->next = current->next;
    current->next->prev = current->prev;
    free(current);
    return head;
}

void meta_list_display(meta_list_t *list)
{
    for (meta_list_t *current = list; current->next; current = current->next)
        meta_mprintf("%s n°%d - %s\n", current->index,
        (char *)(current->data));
}

void meta_list_destroy(meta_list_t *head)
{
    meta_list_t *current = head->next;

    for (; current != nullptr; current = current->next) {
        free(current->prev);
        if (current->next != nullptr)
            continue;
        free(current);
        break;
    }
}
