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

void destroy_image(void *data)
{
    sfImage_destroy((sfImage *)data);
}

void destroy_rectangleshape(void *data)
{
    sfRectangleShape_destroy((sfRectangleShape *)data);
}

void destroy_music(void *data)
{
    sfMusic_destroy((sfMusic *)data);
}
