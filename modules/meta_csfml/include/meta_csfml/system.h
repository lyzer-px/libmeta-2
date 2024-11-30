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

typedef struct meta_system_s {
    meta_window_t *window;
    sfEvent event;
    sfClock *clock;
    sfMusic *music;
    sfFont *font;
} meta_system_t;

meta_system_t *system_create(void);
void system_destroy(meta_system_t *system);
#endif
