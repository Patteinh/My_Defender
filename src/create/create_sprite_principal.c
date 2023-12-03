/*
** EPITECH PROJECT, 2022
** create_sprite.c
** File description:
** create_sprite
*/

#include "my_defender.h"

backg_t *create_sprite_backg(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    backg_t *background = malloc(sizeof(backg_t));
    if (!path)
        return (NULL);
    background->sprite = sfSprite_create();
    background->texture = sfTexture_createFromFile(path, NULL);
    background->rect = rect;
    background->pos = pos;
    background->scale = scale;
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_setTextureRect(background->sprite, background->rect);
    sfSprite_setPosition(background->sprite, background->pos);
    return (background);
}

menu_button_t *create_sprite_b_menu(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    menu_button_t *menu_button = malloc(sizeof(menu_button_t));
    if (!path)
        return (NULL);
    menu_button->sprite = sfSprite_create();
    menu_button->texture = sfTexture_createFromFile(path, NULL);
    menu_button->rect = rect;
    menu_button->pos = pos;
    menu_button->scale = scale;
    sfSprite_setTexture(menu_button->sprite, menu_button->texture, sfTrue);
    sfSprite_setTextureRect(menu_button->sprite, menu_button->rect);
    sfSprite_setPosition(menu_button->sprite, menu_button->pos);
    return (menu_button);
}

ingame_button_t *create_sprite_b_ingame(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    ingame_button_t *ingame_button = malloc(sizeof(ingame_button_t));
    if (!path)
        return (NULL);
    ingame_button->sprite = sfSprite_create();
    ingame_button->texture = sfTexture_createFromFile(path, NULL);
    ingame_button->rect = rect;
    ingame_button->pos = pos;
    ingame_button->scale = scale;
    sfSprite_setTexture(ingame_button->sprite, ingame_button->texture, sfTrue);
    sfSprite_setScale(ingame_button->sprite, ingame_button->scale);
    sfSprite_setTextureRect(ingame_button->sprite, ingame_button->rect);
    sfSprite_setPosition(ingame_button->sprite, ingame_button->pos);
    return (ingame_button);
}

pause_t *create_sprite_b_pause(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    pause_t *pause_button = malloc(sizeof(backg_t));
    if (!path)
        return (NULL);
    pause_button->sprite = sfSprite_create();
    pause_button->texture = sfTexture_createFromFile(path, NULL);
    pause_button->rect = rect;
    pause_button->pos = pos;
    pause_button->scale = scale;
    sfSprite_setTexture(pause_button->sprite, pause_button->texture, sfTrue);
    sfSprite_setTextureRect(pause_button->sprite, pause_button->rect);
    sfSprite_setPosition(pause_button->sprite, pause_button->pos);
    return (pause_button);
}
