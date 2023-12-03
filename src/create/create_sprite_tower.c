/*
** EPITECH PROJECT, 2022
** create_sprite_tower
** File description:
**  create_sprite_tower
*/

#include "my_defender.h"

blue_t create_sprite_t_b(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    blue_t blue;
    blue.sprite = sfSprite_create();
    blue.texture = sfTexture_createFromFile(path, NULL);
    blue.rect = rect;
    blue.pos = pos;
    blue.scale = scale;
    sfSprite_setTexture(blue.sprite, blue.texture, sfTrue);
    sfSprite_setTextureRect(blue.sprite, blue.rect);
    sfSprite_setPosition(blue.sprite, blue.pos);
    return (blue);
}

red_t create_sprite_t_r(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    red_t red;
    red.sprite = sfSprite_create();
    red.texture = sfTexture_createFromFile(path, NULL);
    red.rect = rect;
    red.pos = pos;
    red.scale = scale;
    sfSprite_setTexture(red.sprite, red.texture, sfTrue);
    sfSprite_setTextureRect(red.sprite, red.rect);
    sfSprite_setPosition(red.sprite, red.pos);
    return (red);
}

green_t create_sprite_t_g(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    green_t green;
    green.sprite = sfSprite_create();
    green.texture = sfTexture_createFromFile(path, NULL);
    green.rect = rect;
    green.pos = pos;
    green.scale = scale;
    sfSprite_setTexture(green.sprite, green.texture, sfTrue);
    sfSprite_setTextureRect(green.sprite, green.rect);
    sfSprite_setPosition(green.sprite, green.pos);
    return (green);
}

yellow_t create_sprite_t_y(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    yellow_t yellow;
    yellow.sprite = sfSprite_create();
    yellow.texture = sfTexture_createFromFile(path, NULL);
    yellow.rect = rect;
    yellow.pos = pos;
    yellow.scale = scale;
    sfSprite_setTexture(yellow.sprite, yellow.texture, sfTrue);
    sfSprite_setTextureRect(yellow.sprite, yellow.rect);
    sfSprite_setPosition(yellow.sprite, yellow.pos);
    return (yellow);
}

house_t create_sprite_house(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    house_t house;
    house.sprite = sfSprite_create();
    house.texture = sfTexture_createFromFile(path, NULL);
    house.rect = rect;
    house.pos = pos;
    house.scale = scale;
    sfSprite_setTexture(house.sprite, house.texture, sfTrue);
    sfSprite_setTextureRect(house.sprite, house.rect);
    sfSprite_setPosition(house.sprite, house.pos);
    return (house);
}
