/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** system.c
*/

#include <SFML/Audio/Music.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <SFML/Window/Window.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Types.h>
#include <SFML/Window/Event.h>
#include "meta_csfml/system.h"
#include "meta_csfml/window.h"

void watcher_destroy(meta_watcher_t *watcher)
{
    window_destroy(watcher->window);
    sfClock_destroy(watcher->clock);
    sfMusic_destroy(watcher->music);
    sfFont_destroy(watcher->font);
}

void watcher_sync_clock(meta_watcher_t *src, meta_watcher_t *dest)
{
    sfClock_destroy(dest->clock);
    dest->clock = src->clock;
}

void watcher_set_music(meta_watcher_t *watcher, char const *music_path)
{
    watcher->music = sfMusic_createFromFile(music_path);
}

void watcher_set_font(meta_watcher_t *watcher, char const *font_path)
{
    watcher->font = sfFont_createFromFile(font_path);
}

meta_watcher_t *watcher_create(char const *watched_window_name)
{
    meta_watcher_t *watcher = malloc(sizeof(meta_watcher_t));
    sfVideoMode base_mode = {HD_WIDTH, HD_HEIGHT, BITS_PER_PIXEL};

    if (!watcher)
        return NULL;
    watcher->window = window_init(watched_window_name, base_mode, FPS_LIMIT);
    if (!watcher->window)
        return NULL;
    watcher->clock = sfClock_create();
    if (!watcher->clock)
        return NULL;
    return watcher;
}