/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** destructor.c
*/

#include <SFML/Audio/Music.h>
#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Image.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Context.h>
#include <SFML/Window/Cursor.h>
#include <stdlib.h>
#include  "meta/CSFML/objects.h"

void destroy_image(object_t *object)
{
    sfImage_destroy((sfImage *)object->item);
    free(object);
}

void destroy_rectangleshape(object_t *object)
{
    sfRectangleShape_destroy((sfRectangleShape *)object->item);
    free(object);
}

void destroy_music(object_t *object)
{
    sfMusic_destroy((sfMusic *)object->item);
    free(object);
}
