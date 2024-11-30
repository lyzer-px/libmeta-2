/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** system.h
*/

#ifndef META_SYSTEM_H
    #define META_SYSTEM_H
    #include "window.h"
    #include <SFML/Audio/Types.h>
    #include <SFML/System/Types.h>
    #include <SFML/Window/Event.h>

typedef struct meta_watcher_s {
    meta_window_t *window;
    sfEvent event;
    sfClock *clock;
    sfMusic *music;
    sfFont *font;
    struct meta_watcher_s *next;
} meta_watcher_t;

meta_watcher_t *watcher_create(char const *watched_window_name);
void watcher_destroy(meta_watcher_t *watcher);
#endif
