/*
** EPITECH PROJECT, 2022
** set_spell.c
** File description:
** set_spell
*/

#include "my_defender.h"

void set_spell(defender_t *d)
{
    for (int i = 0; i != 4; i++)
        d->spell[i] = NULL;
    d->spell[0] = create_sprite_spell(FIRE, (sfVector2f){70, 850},
    (sfIntRect){0, 0, 909, 909}, (sfVector2f){0.25, 0.25});
    d->spell[1] = create_sprite_spell(FREEZE, (sfVector2f){600, 830},
    (sfIntRect){0, 0, 909, 909}, (sfVector2f){0.25, 0.25});
    d->spell[2] = create_sprite_spell(LIGHTNING, (sfVector2f){430, 900},
    (sfIntRect){0, 0, 909, 909}, (sfVector2f){0.25, 0.25});
    d->spell[3] = create_sprite_spell(ACID, (sfVector2f){270, 900},
    (sfIntRect){0, 0, 909, 1130}, (sfVector2f){0.25, 0.25});
}
