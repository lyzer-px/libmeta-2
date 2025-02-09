/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** destructor.c
*/

#include <stdlib.h>
#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Context.h>
#include <SFML/Window/Cursor.h>
#include "meta/CSFML/objects.h"

void destroy_circleshape(object_t *object)
{
    sfCircleShape_destroy((sfCircleShape *)object->item);
    free(object);
}

void destroy_context(object_t *object)
{
    sfContext_destroy((sfContext *)object->item);
    free(object);
}

void destroy_convexshape(object_t *object)
{
    sfConvexShape_destroy((sfConvexShape *)object->item);
    free(object);
}

void destroy_cursor(object_t *object)
{
    sfCursor_destroy((sfCursor *)object->item);
    free(object);
}

void destroy_font(object_t *object)
{
    sfFont_destroy((sfFont *)object->item);
    free(object);
}
