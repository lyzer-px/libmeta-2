/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** destructor.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Clock.h>

void destroy_renderwindow(void *data)
{
    sfRenderWindow_destroy((sfRenderWindow *)data);
}

void destroy_sfwindow(void *data)
{
    sfWindow_destroy((sfWindow *)data);
}

void destroy_sprite(void *data)
{
    sfSprite_destroy((sfSprite *)data);
}

void destructor_texture(void *data)
{
    sfSprite_destroy((sfSprite *)data);
}

void destroy_clock(void *data)
{
    sfClock_destroy((sfClock *) data);
}
