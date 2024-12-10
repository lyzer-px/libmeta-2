/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** linked_lists.h
*/

#ifndef LINKED_LISTS_H
    #define LINKED_LISTS_H

typedef struct linked_list_s {
    void *data;
    unsigned int index;
    struct linked_list_s *next;
    struct linked_list_s *prev;
} linked_list_t;


linked_list_t *create_node(void);
linked_list_t *push_front(void *data, linked_list_t *head);
linked_list_t *delete_node(linked_list_t *head, unsigned int index);
void display_list(linked_list_t *list);
void destroy_list(linked_list_t *head);
#endif
