/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** funptr1.c
*/

#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/System/Clock.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/WindowBase.h>
#include <meta/CSFML/basics.h>

void *create_renderwindow(void)
{
    return sfRenderWindow_create(BASE_MODE, TITLE, sfResize | sfClose, nullptr);
}

void *create_sprite(void)
{
    return sfSprite_create();
}

void *create_sfwindow(void)
{
    return sfWindow_create(BASE_MODE, TITLE, sfResize | sfClose, nullptr);
}

void *create_circleshape(void)
{
    return sfCircleShape_create();
}

void *create_clock(void)
{
    return sfClock_create();
}
