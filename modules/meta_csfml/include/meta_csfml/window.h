/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef META_WINDOW_H
    #define META_WINDOW_H
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window/VideoMode.h>
    #define HD_WIDTH 1920
    #define HD_HEIGHT 1080
    #define BITS_PER_PIXEL 32
    #define FPS_LIMIT 60;
typedef struct meta_window_s {
    sfRenderWindow *instance;
    sfSprite *obj;
    sfTexture *skin;
} meta_window_t;

meta_window_t *window_init(char const *name, sfVideoMode mode,
    unsigned int fps_limit);
void window_destroy(meta_window_t *screen);
void window_handle_size(meta_window_t *screen, sfVector2u minimal_size);
#endif
