/*
** EPITECH PROJECT, 2024
** libgraphic
** File description:
** objects.h
*/

#ifndef OBJECTS_H
    #define OBJECTS_H
    #include <stddef.h>

typedef enum csfml_types_e {
    SFRENDERWINDOW = 0,
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
} csfml_types_t;

void generic_destroy(void *data, int type_id);
void *generic_create(int type_id);

void *create_renderwindow(void);
void *create_sprite(void);
void *create_sfwindow(void);
void *create_clock(void);
void *create_circleshape(void);
void *create_context(void);
void *create_convexshape(void);
void *create_cursor(void);
void *create_font(void);
void *create_texture(void);
void *create_circleshape(void);
void *create_convexshape(void);
void *create_cursor(void);
void *create_image(void);
void *create_font(void);
void *create_image(void);
void *create_music(void);
void *create_rectangleshape(void);

void destroy_renderwindow(void *data);
void destroy_sprite(void *data);
void destroy_sfwindow(void *data);
void destructor_texture(void *data);
void destroy_clock(void *data);
void destroy_circleshape(void *data);
void destroy_context(void *data);
void destroy_convexshape(void *data);
void destroy_cursor(void *data);
void destroy_font(void *data);
void destroy_circleshape(void *data);
void destroy_convexshape(void *data);
void destroy_cursor(void *data);
void destroy_image(void *data);
void destroy_font(void *data);
void destroy_image(void *data);
void destroy_music(void *data);
void destroy_rectangleshape(void *data);

typedef void (*destructor_t) (void *);
typedef void *(*constructor_t) (void);

typedef struct method_s {
    int type;
    destructor_t destructor;
    constructor_t constructor;
} method_t;

[[maybe_unused]] static const method_t METHODS[] =
    {{SFRENDERWINDOW, &destroy_renderwindow, &create_renderwindow},
    { SFWINDOW, &destroy_sfwindow, &create_sfwindow},
    { SFSPRITE, &destroy_sprite, &create_sprite},
    { SFTEXTURE, &destructor_texture, &create_texture},
    { SFCLOCK, &destroy_clock, &create_clock},
    { SFCIRCLESHAPE, &destroy_circleshape, &create_circleshape},
    { SFCONTEXT, &destroy_context, &create_context},
    { SFCONVEXSHAPE, &destroy_convexshape, &create_convexshape},
    { SFCURSOR, &destroy_cursor, &create_cursor},
    { SFFONT, &destroy_font, &create_font},
    { SFIMAGE, &destroy_context, &create_image},
    {SFMUSIC, &destroy_music, &create_music},
    {SFRECTANGLESHAPE, &destroy_rectangleshape, &create_rectangleshape}};

typedef struct object_s {
    void *data;
    method_t methods;
}object_t;

#endif
