/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** funptr2.c
*/

#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Image.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Window/Context.h>
#include <SFML/Window/Cursor.h>
#include <SFML/Audio/Music.h>
#include <meta/CSFML/basics.h>

void *create_context(void)
{
    return sfContext_create();
}

void *create_convexshape(void)
{
    return sfConvexShape_create();
}

void *create_sfcursor(void)
{
    return sfCursor_createFromSystem(sfCursorArrow);
}

void *create_image(void)
{
    return sfImage_create(BASE_WIDTH, BASE_HEIGHT);
}

void *create_rectangleshape(void)
{
    return sfRectangleShape_create();
}
