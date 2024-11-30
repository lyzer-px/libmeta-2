/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** watchers_list..c
*/

#include <stddef.h>
#include "system.h"

void watcher_list_destroy(meta_watcher_t *list)
{
    while (list->next != NULL) {
        watcher_destroy(list);
        list = list->next;
    }

}

meta_watcher_t *watcher_list_new_node(char const *title)
{
    meta_watcher_t *node = watcher_create(title);

    if (!head)
        return NULL;
    head->next = NULL;
    head->prev = NULL;
    return head;
}

meta_watcher_t *watcher_list_add_node(meta_watcher_t *prev, char const *title)
{
    meta_watcher_t *node = watcher_list_new_node(title);

    node->next = prev;
    node->prev = prev;
    prev = node;
    return node;
}