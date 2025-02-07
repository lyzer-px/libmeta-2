/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** methods.h
*/

#ifndef META_METHODS_H
    #define META_METHODS_H

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

void destroy_renderwindow(object_t *object);
void destroy_sprite(object_t *object);
void destroy_sfwindow(object_t *object);
void destructor_texture(object_t *object);
void destroy_clock(object_t *object);
void destroy_circleshape(object_t *object);
void destroy_context(object_t *object);
void destroy_convexshape(object_t *object);
void destroy_cursor(object_t *object);
void destroy_font(object_t *object);
void destroy_circleshape(object_t *object);
void destroy_convexshape(object_t *object);
void destroy_cursor(object_t *object);
void destroy_image(object_t *object);
void destroy_font(object_t *object);
void destroy_image(object_t *object);
void destroy_music(object_t *object);
void destroy_rectangleshape(object_t *object);
#endif