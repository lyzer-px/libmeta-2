/*
** EPITECH PROJECT, 2025
** libmeta
** File description:
** objects.h
*/

#ifndef OBJECTS_H
    #define OBJECTS_H
    #include <stddef.h>
    #include 
    #define FOR for
    #define FOREACH(method) FOR (size_t i = 0; method[i].type != META_END; i++)

typedef struct object_s object_t;

typedef void (*destructor_t) (object_t *object);
typedef void *(*constructor_t) (void);

typedef struct method_s {
    size_t type;
    destructor_t destructor;
    constructor_t constructor;
} method_t;

struct object_s {
    void *item;
    int tag;
    method_t methods;
};

typedef enum csfml_types_e {
    GHOST = -1,
    SFRENDERWINDOW,
    SFWINDOW,
    SFSPRITE,
    SFTEXTURE,
    SFCLOCK,
    SFCIRCLESHAPE,
    SFCONTEXT,
    SFCONVEXSHAPE,
    SFCURSOR,
    SFFONT,
    SFIMAGE,
    SFMUSIC,
    SFRECTANGLESHAPE,
    META_END,
} csfml_types_t;


[[maybe_unused]] static const method_t METHODS_END =
{META_END, nullptr, nullptr};


[[maybe_unused]] static const method_t METHODS[] =
    {{SFRENDERWINDOW, &destroy_renderwindow, &create_renderwindow},
    {SFWINDOW, &destroy_sfwindow, &create_sfwindow},
    {SFSPRITE, &destroy_sprite, &create_sprite},
    {SFTEXTURE, &destructor_texture, &create_texture},
    {SFCLOCK, &destroy_clock, &create_clock},
    {SFCIRCLESHAPE, &destroy_circleshape, &create_circleshape},
    {SFCONTEXT, &destroy_context, &create_context},
    {SFCONVEXSHAPE, &destroy_convexshape, &create_convexshape},
    {SFCURSOR, &destroy_cursor, &create_cursor},
    {SFFONT, &destroy_font, &create_font},
    {SFIMAGE, &destroy_context, &create_image},
    {SFMUSIC, &destroy_music, &create_music},
    {SFRECTANGLESHAPE, &destroy_rectangleshape, &create_rectangleshape},
    METHODS_END};
#endif
