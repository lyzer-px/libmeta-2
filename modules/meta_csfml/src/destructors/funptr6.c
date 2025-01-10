/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** destructor.c
*/

#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Context.h>
#include <SFML/Window/Cursor.h>

void destroy_circleshape(void *data)
{
    sfCircleShape_destroy((sfCircleShape *)data);
}

void destroy_context(void *data)
{
    sfContext_destroy((sfContext *)data);
}

void destroy_convexshape(void *data)
{
    sfConvexShape_destroy((sfConvexShape *)data);
}

void destroy_cursor(void *data)
{
    sfCursor_destroy((sfCursor *)data);
}

void destroy_font(void *data)
{
    sfFont_destroy((sfFont *)data);
}
