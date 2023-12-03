/*
** EPITECH PROJECT, 2022
** shop.c
** File description:
** shop
*/

#include "my_defender.h"

void set_shop_button(defender_t *d)
{
    for (int i = 0; i != 24; i++)
        d->shop_button[i] = NULL;
    d->shop_button[0] = create_sprite_b_shop(B_TABLE, (sfVector2f){520, 290},
    (sfIntRect){0, 0, 966, 627}, (sfVector2f){0.9, 0.9});
    d->shop_button[1] = create_sprite_b_shop(B_R, (sfVector2f){680, -100},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
    d->shop_button[2] = create_sprite_b_shop(B_R, (sfVector2f){1180, -100},
    (sfIntRect){0, 0, 40, 472}, (sfVector2f){1, 1});
    d->shop_button[3] = create_sprite_b_shop(B_H_SHOP, (sfVector2f){800, 280},
    (sfIntRect){0, 0, 394, 162}, (sfVector2f){0.8, 0.8});
    d->shop_button[4] = create_sprite_b_shop(B_CL, (sfVector2f){1310, 258},
    (sfIntRect){0, 0, 103, 104}, (sfVector2f){1, 1});
    d->shop_button[5] = create_sprite_b_shop(B_W, (sfVector2f){590, 500},
    (sfIntRect){0, 0, 422, 464}, (sfVector2f){0.5, 0.6});
    d->shop_button[6] = create_sprite_b_shop(B_W, (sfVector2f){846, 500},
    (sfIntRect){0, 0, 422, 464}, (sfVector2f){0.5, 0.6});
    d->shop_button[7] = create_sprite_b_shop(B_W, (sfVector2f){1100, 500},
    (sfIntRect){0, 0, 422, 464}, (sfVector2f){0.5, 0.6});
    d->shop_button[8] = create_sprite_b_shop(B_DIAM, (sfVector2f){650, 550},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.9, 0.9});
}

void set_shop_button_two(defender_t *d)
{
    d->shop_button[9] = create_sprite_b_shop(B_DIAM, (sfVector2f){872, 526},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.4, 0.4});
    d->shop_button[10] = create_sprite_b_shop(B_DIAM, (sfVector2f){992, 606},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.4, 0.4});
    d->shop_button[11] = create_sprite_b_shop(B_DIAM, (sfVector2f){910, 550},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.9, 0.9});
    d->shop_button[12] = create_sprite_b_shop(B_DIAM, (sfVector2f){1123, 526},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.4, 0.4});
    d->shop_button[13] = create_sprite_b_shop(B_DIAM, (sfVector2f){1162, 550},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.9, 0.9});
    d->shop_button[14] = create_sprite_b_shop(B_DIAM, (sfVector2f){1245, 606},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.4, 0.4});
    d->shop_button[15] = create_sprite_b_shop(B_DIAM, (sfVector2f){1145, 606},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.2, 0.2});
    d->shop_button[16] = create_sprite_b_shop(B_DIAM, (sfVector2f){1250, 532},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.3, 0.3});
    d->shop_button[17] = create_sprite_b_shop(B_DIAM, (sfVector2f){1185, 636},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.3, 0.3});
}

void set_shop_button_three(defender_t *d)
{
    d->shop_button[18] = create_sprite_b_shop(B_DIAM, (sfVector2f){1135, 645},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.17, 0.17});
    d->shop_button[19] = create_sprite_b_shop(B_DIAM, (sfVector2f){1115, 585},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.1, 0.1});
    d->shop_button[20] = create_sprite_b_shop(B_DIAM, (sfVector2f){1200, 522},
    (sfIntRect){0, 0, 100, 89}, (sfVector2f){0.2, 0.2});
    d->shop_button[21] = create_sprite_b_shop(B_EM, (sfVector2f){605, 690},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.8, 0.8});
    d->shop_button[22] = create_sprite_b_shop(B_EM, (sfVector2f){860, 690},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.8, 0.8});
    d->shop_button[23] = create_sprite_b_shop(B_EM, (sfVector2f){1114, 690},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.8, 0.8});
}
