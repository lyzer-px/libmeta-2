/*
** EPITECH PROJECT, 2024
** meta_csfml
** File description:
** asset.h
*/

#ifndef META_ASSET_H
    #define META_ASSET_H
    #include <SFML/Audio/Types.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>

typedef struct meta_asset_s {
    sfTexture *skin;
    sfSprite *entity;
    sfVector2f pos;
    sfIntRect hitbox;
} meta_asset_t;

meta_asset_t *asset_create(char const *texture_path, sfIntRect rect,
    sfVector2f base_pos);
void asset_destroy(meta_asset_t *asset);
#endif
