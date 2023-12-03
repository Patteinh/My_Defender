/*
** EPITECH PROJECT, 2022
** lose.c
** File description:
** lose
*/

#include "my_defender.h"

void set_lose_button(defender_t *d)
{
    for (int i = 0; i != 7; i++)
        d->lose_button[i] = NULL;
    d->lose_button[0] = create_sprite_b_lose(B_E_TABLE, (sfVector2f){670, 170},
    (sfIntRect){0, 0, 700, 800}, (sfVector2f){0.9, 0.9});
    d->lose_button[1] = create_sprite_b_lose(B_H_LOSE, (sfVector2f){760, 170},
    (sfIntRect){0, 0, 394, 162}, (sfVector2f){1, 1});
    d->lose_button[2] = create_sprite_b_lose(B_RESTART, (sfVector2f){735, 750},
    (sfIntRect){0, 0, 176, 176}, (sfVector2f){1, 1});
    d->lose_button[3] = create_sprite_b_lose(B_MENU, (sfVector2f){1000, 750},
    (sfIntRect){0, 0, 176, 176}, (sfVector2f){1, 1});
    d->lose_button[4] = create_sprite_b_lose(STAR_L, (sfVector2f){710, 400},
    (sfIntRect){0, 0, 500, 500}, (sfVector2f){0.3, 0.3});
    d->lose_button[5] = create_sprite_b_lose(STAR_L, (sfVector2f){828, 300},
    (sfIntRect){0, 0, 500, 500}, (sfVector2f){0.5, 0.5});
    d->lose_button[6] = create_sprite_b_lose(STAR_L, (sfVector2f){1047, 400},
    (sfIntRect){0, 0, 500, 500}, (sfVector2f){0.3, 0.3});
}
