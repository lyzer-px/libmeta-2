/*
** EPITECH PROJECT, 2024
** meta_list_lib
** File description:
** linked_lists.h
*/

#ifndef LINKED_LISTS_H
    #define LINKED_LISTS_H
    #include <unistd.h>

typedef struct meta_list_s {
    void *data;
    ssize_t index;
    struct meta_list_s *next;
    struct meta_list_s *prev;
} meta_list_t;

meta_list_t *meta_node_create(void);
meta_list_t *meta_node_push(void *data, meta_list_t *head);
meta_list_t *meta_node_delete(meta_list_t *head, unsigned int index);
void meta_list_display(meta_list_t *list);
void meta_list_destroy(meta_list_t *head);
#endif
