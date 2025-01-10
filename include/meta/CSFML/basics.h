/*
** EPITECH PROJECT, 2024
** B-MUL-100-PAR-1-1-myradar-liam.harfouche
** File description:
** my_hunter.h
*/

#ifndef META_CSFML_H
    #define META_CSFML_H
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window/Types.h>
    #include <SFML/Window/VideoMode.h>
    #include <SFML/Window/Window.h>

    #define SCREEN_HEIGHT 1080
    #define SCREEN_WIDTH 1920
    #define BASE_HEIGHT SCREEN_HEIGHT / 10
    #define BASE_WIDTH SCREEN_HEIGHT / 10
    #define FPS_LIMIT 30
    #define BIT_PX 32


[[maybe_unused]] static const sfVideoMode BASE_MODE = {SCREEN_WIDTH,
SCREEN_WIDTH, BIT_PX};

[[maybe_unused]] static const char *TITLE = "my_window";
#endif
