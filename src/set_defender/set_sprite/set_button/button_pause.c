/*
** EPITECH PROJECT, 2022
** set_pause.c
** File description:
** set_pause
*/

#include "my_defender.h"

void set_pause_button(defender_t *d)
{
    for (int i = 0; i != 3; i++)
        d->pause_button[i] = NULL;
    d->pause_button[0] = create_sprite_b_pause(B_TABLE, (sfVector2f){500, 200},
    (sfIntRect){0, 0, 966, 627}, (sfVector2f){1, 1});
    d->pause_button[1] = create_sprite_b_pause(B_R, (sfVector2f){600, -70},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
    d->pause_button[2] = create_sprite_b_pause(B_R, (sfVector2f){1300, -70},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
}
