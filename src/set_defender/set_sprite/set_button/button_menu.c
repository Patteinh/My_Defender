/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** menu
*/

#include "my_defender.h"

void set_menu_button(defender_t *d)
{
    for (int i = 0; i != 9; i++)
        d->menu_button[i] = NULL;
    d->menu_button[0] = create_sprite_b_menu(B_R, (sfVector2f){872, 465},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){1.1, 1.1});
    d->menu_button[1] = create_sprite_b_menu(B_R, (sfVector2f){1022, 463},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){1.1, 1.1});
    d->menu_button[2] = create_sprite_b_menu(B_SHOP, (sfVector2f){814, 760},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){1.3, 1.2});
    d->menu_button[3] = create_sprite_b_menu(B_PLAY, (sfVector2f){788, 350},
    (sfIntRect){0, 0, 331, 329}, (sfVector2f){1.1, 1.1});
    d->menu_button[4] = create_sprite_b_menu(B_SET, (sfVector2f){1744, 25},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.9, 0.9});
    d->menu_button[5] = create_sprite_b_menu(LOGO, (sfVector2f){300, -160},
    (sfIntRect){0, 0, 3000, 1800}, (sfVector2f){0.45, 0.45});
    d->menu_button[6] = create_sprite_b_menu(B_MON, (sfVector2f){20, 22},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.9, 0.9});
    d->menu_button[7] = create_sprite_b_menu(B_MOFF, (sfVector2f){20, 22},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.9, 0.9});
    d->menu_button[8] = create_sprite_b_menu(B_EM, (sfVector2f){10, 869},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){1, 1});
}
