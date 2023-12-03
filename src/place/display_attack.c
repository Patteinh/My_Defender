/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** display_attack
*/

#include "my_defender.h"

void loop_display_attack(defender_t *d, int i, int degrees)
{
    sfSprite_setPosition(d->attack[i]->sprite, d->attack[i]->pos);
    sfSprite_setScale(d->attack[i]->sprite, d->attack[i]->scale);
    sfSprite_setRotation(d->attack[i]->sprite, degrees);
    sfRenderWindow_drawSprite(d->window, d->attack[i]->sprite, NULL);
    sfSprite_setTextureRect(d->attack[i]->sprite, d->attack[i]->rect);
    kill_mobs(d);
}
