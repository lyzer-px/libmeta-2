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
#include <stdlib.h>
#include "meta/CSFML/objects.h"

void destroy_renderwindow(object_t *object)
{
    sfRenderWindow_destroy((sfRenderWindow *)object->item);
    free(object);
}

void destroy_sfwindow(object_t *object)
{
    sfWindow_destroy((sfWindow *)object->item);
    free(object);
}

void destroy_sprite(object_t *object)
{
    sfSprite_destroy((sfSprite *)object->item);
    free(object);
}

void destructor_texture(object_t *object)
{
    sfSprite_destroy((sfSprite *)object->item);
    free(object);
}

void destroy_clock(object_t *object)
{
    sfClock_destroy((sfClock *) object->item);
    free(object);
}
