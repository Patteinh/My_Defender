/*
** EPITECH PROJECT, 2022
** create_sprite_redir.c
** File description:
** create_sprite_redir
*/

#include "my_defender.h"

lose_button_t *create_sprite_b_lose(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    lose_button_t *lose_button = malloc(sizeof(lose_button_t));
    if (!path)
        return (NULL);
    lose_button->sprite = sfSprite_create();
    lose_button->texture = sfTexture_createFromFile(path, NULL);
    lose_button->rect = rect;
    lose_button->pos = pos;
    lose_button->scale = scale;
    sfSprite_setTexture(lose_button->sprite, lose_button->texture, sfTrue);
    sfSprite_setTextureRect(lose_button->sprite, lose_button->rect);
    sfSprite_setPosition(lose_button->sprite, lose_button->pos);
    return (lose_button);
}

win_button_t *create_sprite_b_win(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    win_button_t *lose_button = malloc(sizeof(win_button_t));
    if (!path)
        return (NULL);
    lose_button->sprite = sfSprite_create();
    lose_button->texture = sfTexture_createFromFile(path, NULL);
    lose_button->rect = rect;
    lose_button->pos = pos;
    lose_button->scale = scale;
    sfSprite_setTexture(lose_button->sprite, lose_button->texture, sfTrue);
    sfSprite_setTextureRect(lose_button->sprite, lose_button->rect);
    sfSprite_setPosition(lose_button->sprite, lose_button->pos);
    return (lose_button);
}

help_button_t *create_sprite_help(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    help_button_t *help_button = malloc(sizeof(lose_button_t));
    if (!path)
        return (NULL);
    help_button->sprite = sfSprite_create();
    help_button->texture = sfTexture_createFromFile(path, NULL);
    help_button->rect = rect;
    help_button->pos = pos;
    help_button->scale = scale;
    sfSprite_setTexture(help_button->sprite, help_button->texture, sfTrue);
    sfSprite_setTextureRect(help_button->sprite, help_button->rect);
    sfSprite_setPosition(help_button->sprite, help_button->pos);
    return (help_button);
}

shop_button_t *create_sprite_b_shop(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    shop_button_t *shop_button = malloc(sizeof(shop_button_t));
    if (!path)
        return (NULL);
    shop_button->sprite = sfSprite_create();
    shop_button->texture = sfTexture_createFromFile(path, NULL);
    shop_button->rect = rect;
    shop_button->pos = pos;
    shop_button->scale = scale;
    sfSprite_setTexture(shop_button->sprite, shop_button->texture, sfTrue);
    sfSprite_setTextureRect(shop_button->sprite, shop_button->rect);
    sfSprite_setPosition(shop_button->sprite, shop_button->pos);
    return (shop_button);
}

setting_button_t *create_sprite_b_setting(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    setting_button_t *set_button = malloc(sizeof(setting_button_t));
    if (!path)
        return (NULL);
    set_button->sprite = sfSprite_create();
    set_button->texture = sfTexture_createFromFile(path, NULL);
    set_button->rect = rect;
    set_button->pos = pos;
    set_button->scale = scale;
    sfSprite_setTexture(set_button->sprite, set_button->texture, sfTrue);
    sfSprite_setTextureRect(set_button->sprite, set_button->rect);
    sfSprite_setPosition(set_button->sprite, set_button->pos);
    return (set_button);
}
