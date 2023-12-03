/*
** EPITECH PROJECT, 2022
** create_sprite_utils.c
** File description:
** create_sprite_utils
*/

#include "my_defender.h"

spell_t *create_sprite_spell(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    spell_t *spell = malloc(sizeof(spell_t));
    if (!path)
        return (NULL);
    spell->sprite = sfSprite_create();
    spell->texture = sfTexture_createFromFile(path, NULL);
    spell->rect = rect;
    spell->pos = pos;
    spell->scale = scale;
    sfSprite_setScale(spell->sprite, spell->scale);
    sfSprite_setTexture(spell->sprite, spell->texture, sfTrue);
    sfSprite_setTextureRect(spell->sprite, spell->rect);
    sfSprite_setPosition(spell->sprite, spell->pos);
    return (spell);
}

mob_t *create_sprite_mob(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    mob_t *mob = malloc(sizeof(menu_button_t));
    if (!path)
        return (NULL);
    mob->sprite = sfSprite_create();
    mob->texture = sfTexture_createFromFile(path, NULL);
    mob->rect = rect;
    mob->pos = pos;
    mob->scale = scale;
    sfSprite_setTexture(mob->sprite, mob->texture, sfTrue);
    sfSprite_setTextureRect(mob->sprite, mob->rect);
    sfSprite_setPosition(mob->sprite, mob->pos);
    return (mob);
}

attack_t *create_sprite_attack(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    attack_t *attack = malloc(sizeof(attack_t));
    if (!path)
        return (NULL);
    attack->sprite = sfSprite_create();
    attack->texture = sfTexture_createFromFile(path, NULL);
    attack->rect = rect;
    attack->pos = pos;
    attack->scale = scale;
    sfSprite_setScale(attack->sprite, attack->scale);
    sfSprite_setTexture(attack->sprite, attack->texture, sfTrue);
    sfSprite_setTextureRect(attack->sprite, attack->rect);
    sfSprite_setPosition(attack->sprite, attack->pos);
    return (attack);
}
