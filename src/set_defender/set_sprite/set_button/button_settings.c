/*
** EPITECH PROJECT, 2022
** settings.c
** File description:
** settings
*/

#include "my_defender.h"

void set_setting_button(defender_t *d)
{
    for (int i = 0; i != 10; i++)
        d->set_button[i] = NULL;
    d->set_button[0] = create_sprite_b_setting(B_TABLE, (sfVector2f){520, 290},
    (sfIntRect){0, 0, 966, 627}, (sfVector2f){0.9, 0.9});
    d->set_button[1] = create_sprite_b_setting(B_H_SET, (sfVector2f){800, 280},
    (sfIntRect){0, 0, 394, 162}, (sfVector2f){0.8, 0.8});
    d->set_button[2] = create_sprite_b_setting(B_R, (sfVector2f){680, -100},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
    d->set_button[3] = create_sprite_b_setting(B_R, (sfVector2f){1180, -100},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
    d->set_button[4] = create_sprite_b_setting(B_W, (sfVector2f){590, 410},
    (sfIntRect){0, 0, 422, 464}, (sfVector2f){0.7, 0.8});
    d->set_button[5] = create_sprite_b_setting(B_W, (sfVector2f){1010, 410},
    (sfIntRect){0, 0, 422, 464}, (sfVector2f){0.7, 0.8});
    d->set_button[6] = create_sprite_b_setting(B_CL, (sfVector2f){1310, 258},
    (sfIntRect){0, 0, 103, 104}, (sfVector2f){1, 1});
    set_setting_button_two(d);
}

void set_setting_button_two(defender_t *d)
{
    d->set_button[7] = create_sprite_b_setting(B_ON, (sfVector2f){675, 620},
    (sfIntRect){0, 0, 131, 63}, (sfVector2f){1, 1});
    d->set_button[8] = create_sprite_b_setting(B_MIN, (sfVector2f){1120, 535},
    (sfIntRect){0, 0, 62, 60}, (sfVector2f){1.4, 1.4});
    d->set_button[9] = create_sprite_b_setting(B_PL, (sfVector2f){1120, 645},
    (sfIntRect){0, 0, 62, 60}, (sfVector2f){1.4, 1.4});
}
