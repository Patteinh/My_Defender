/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** background
*/

#include "my_defender.h"

void set_background(defender_t *d)
{
    for (int i = 0; i != 2; i++)
        d->background[i] = NULL;
    d->background[0] = create_sprite_backg(MENU_WORLD, (sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1, 1});
    d->background[1] = create_sprite_backg(DARK_WORLD, (sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1, 1});
}
