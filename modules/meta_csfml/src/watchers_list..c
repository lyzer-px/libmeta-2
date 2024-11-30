/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** watchers_list..c
*/

#include "system.h"

meta_watcher_t *watcher_list_new_node()
{
    meta_watcher_t *head = watcher_create("I AM WATCHING YOU");

    if (!head)
        return NULL;
    head->next = NULL;
    return head;
}

meta_watcher_t *watcher_list_add_node(meta_watcher_t prev, )