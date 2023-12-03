/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** button_help
*/

#include "my_defender.h"

void set_help_button(defender_t *d)
{
    for (int i = 0; i != 20; i++)
        d->help_button[i] = NULL;
    d->help_button[0] = create_sprite_help(BLURRY, (sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1, 1});
    d->help_button[1] = create_sprite_help(B_R, (sfVector2f){572, -20},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){1.7, 1.7});
    d->help_button[2] = create_sprite_help(B_R, (sfVector2f){1322, -20},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){1.7, 1.7});
    d->help_button[3] = create_sprite_help(B_TABLE, (sfVector2f){300, 85},
    (sfIntRect){0, 0, 966, 627}, (sfVector2f){1.4, 1.4});
    d->help_button[4] = create_sprite_help(LOGO, (sfVector2f){300, -1260},
    (sfIntRect){0, 0, 3000, 1800}, (sfVector2f){0.45, 0.45});
    d->help_button[5] = create_sprite_help(B_MENU, (sfVector2f){1480, 790},
    (sfIntRect){0, 0, 176, 176}, (sfVector2f){0.6, 0.6});
    d->help_button[6] = create_sprite_help(B_R_T, (sfVector2f){460, 415},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.35, 0.35});
    set_help_button_two(d);
}

void set_help_button_two(defender_t *d)
{
    d->help_button[7] = create_sprite_help(B_G_T, (sfVector2f){570, 455},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.4, 0.4});
    d->help_button[8] = create_sprite_help(B_Y_T, (sfVector2f){680, 452},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.38, 0.38});
    d->help_button[9] = create_sprite_help(B_B_T, (sfVector2f){780, 455},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.4, 0.4});
    d->help_button[10] = create_sprite_help(B_CL, (sfVector2f){1550, 40},
    (sfIntRect){0, 0, 103, 104}, (sfVector2f){1.3, 1.3});
    d->help_button[11] = create_sprite_help(B_ST, (sfVector2f){506, 590},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.33, 0.33});
    set_help_button_three(d);
}

void set_help_button_three(defender_t *d)
{
    d->help_button[12] = create_sprite_help(B_FIRE, (sfVector2f){675, 800},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.4, 0.4});
    d->help_button[13] = create_sprite_help(B_ACID, (sfVector2f){750, 800},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.4, 0.4});
    d->help_button[14] = create_sprite_help(B_LIGHT, (sfVector2f){825, 800},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.4, 0.4});
    d->help_button[15] = create_sprite_help(B_R, (sfVector2f){1346, 400},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){0.7, 0.7});
    d->help_button[16] = create_sprite_help(B_R, (sfVector2f){1220, 400},
    (sfIntRect){0, 0, 33, 317}, (sfVector2f){0.7, 0.7});
    d->help_button[17] = create_sprite_help(B_EM, (sfVector2f){1180, 280},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){1, 1});
    d->help_button[18] = create_sprite_help(B_ICE, (sfVector2f){900, 800},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.4, 0.4});
    d->help_button[19] = create_sprite_help(B_PLAY, (sfVector2f){1170, 500},
    (sfIntRect){0, 0, 331, 329}, (sfVector2f){0.8, 0.8});
}
