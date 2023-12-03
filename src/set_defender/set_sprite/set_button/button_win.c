/*
** EPITECH PROJECT, 2022
** win.c
** File description:
** win
*/

#include "my_defender.h"

void set_win_button(defender_t *d)
{
    for (int i = 0; i != 7; i++)
        d->win_button[i] = NULL;
    d->win_button[0] = create_sprite_b_win(B_E_TABLE, (sfVector2f){670, 170},
    (sfIntRect){0, 0, 700, 800}, (sfVector2f){0.9, 0.9});
    d->win_button[1] = create_sprite_b_win(B_HEAD_WIN, (sfVector2f){760, 170},
    (sfIntRect){0, 0, 394, 162}, (sfVector2f){1, 1});
    d->win_button[2] = create_sprite_b_win(B_RESTART, (sfVector2f){760, 740},
    (sfIntRect){0, 0, 176, 176}, (sfVector2f){1, 1});
    d->win_button[3] = create_sprite_b_win(B_MENU, (sfVector2f){980, 740},
    (sfIntRect){0, 0, 176, 176}, (sfVector2f){1, 1});
    d->win_button[4] = create_sprite_b_win(STAR, (sfVector2f){710, 400},
    (sfIntRect){0, 0, 512, 512}, (sfVector2f){0.3, 0.3});
    d->win_button[5] = create_sprite_b_win(STAR, (sfVector2f){828, 300},
    (sfIntRect){0, 0, 512, 512}, (sfVector2f){0.5, 0.5});
    d->win_button[6] = create_sprite_b_win(STAR, (sfVector2f){1047, 400},
    (sfIntRect){0, 0, 512, 512}, (sfVector2f){0.3, 0.3});
}
