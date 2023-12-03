/*
** EPITECH PROJECT, 2022
** ingame_button[0].c
** File description:
** ingame_button[0]
*/

#include "my_defender.h"

void set_play_button(defender_t *d)
{
    for (int i = 0; i != 24; i++)
        d->p_b[i] = NULL;
    d->p_b[0] = create_sprite_b_ingame(B_TBL_TOP, (sfVector2f){20, 22},
    (sfIntRect){0, 0, 495, 365}, (sfVector2f){0.8, 0.8});
    d->p_b[1] = create_sprite_b_ingame(B_BAR, (sfVector2f){92, 100},
    (sfIntRect){0, 0, 385, 44}, (sfVector2f){0.79, 0.79});
    d->p_b[2] = create_sprite_b_ingame(B_BAR, (sfVector2f){90, 200},
    (sfIntRect){0, 0, 385, 44}, (sfVector2f){0.8, 0.8});
    d->p_b[3] = create_sprite_b_ingame(B_M, (sfVector2f){97, 104},
    (sfIntRect){0, 0, 327, 34}, (sfVector2f){0.9, 0.9});
    d->p_b[4] = create_sprite_b_ingame(B_C_M, (sfVector2f){35, 100},
    (sfIntRect){0, 0, 50, 40}, (sfVector2f){0.92, 0.9});
    d->p_b[5] = create_sprite_b_ingame(B_LIFE, (sfVector2f){97, 204},
    (sfIntRect){0, 0, 327.8, 30}, (sfVector2f){0.9, 0.9});
    d->p_b[6] = create_sprite_b_ingame(B_HEART, (sfVector2f){35, 200},
    (sfIntRect){0, 0, 37, 33}, (sfVector2f){0.92, 0.9});
    d->p_b[7] = create_sprite_b_ingame(B_TBL_D, (sfVector2f){55, 910},
    (sfIntRect){0, 0, 1978, 192}, (sfVector2f){0.9, 0.9});
    set_play_button_two(d);
    set_play_button_three(d);
}

void set_play_button_two(defender_t *d)
{
    d->p_b[8] = create_sprite_b_ingame(B_FIRE, (sfVector2f){100, 920},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.87, 0.87});
    d->p_b[9] = create_sprite_b_ingame(B_ACID, (sfVector2f){270, 920},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.87, 0.87});
    d->p_b[10] = create_sprite_b_ingame(B_LIGHT, (sfVector2f){440, 920},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.87, 0.87});
    d->p_b[11] = create_sprite_b_ingame(B_ICE, (sfVector2f){610, 920},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.87, 0.87});
    d->p_b[12] = create_sprite_b_ingame(B_EM, (sfVector2f){780, 932},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.87, 0.87});
    d->p_b[13] = create_sprite_b_ingame(B_EM, (sfVector2f){980, 932},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.87, 0.87});
    d->p_b[14] = create_sprite_b_ingame(B_EM, (sfVector2f){1180, 932},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.87, 0.87});
    d->p_b[15] = create_sprite_b_ingame(B_EM, (sfVector2f){1380, 932},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.87, 0.87});
    d->p_b[16] = create_sprite_b_ingame(B_B_T, (sfVector2f){840, 952},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.5, 0.5});
}

void set_play_button_three(defender_t *d)
{
    d->p_b[17] = create_sprite_b_ingame(B_R_T, (sfVector2f){1040, 890},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.5, 0.5});
    d->p_b[18] = create_sprite_b_ingame(B_G_T, (sfVector2f){1240, 952},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.5, 0.5});
    d->p_b[19] = create_sprite_b_ingame(B_Y_T, (sfVector2f){1440, 952},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.5, 0.5});
    d->p_b[20] = create_sprite_b_ingame(B_ST, (sfVector2f){1600, 922},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.87, 0.87});
    d->p_b[21] = create_sprite_b_ingame(B_P, (sfVector2f){1780, 10},
    (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.7, 0.7});
    d->p_b[22] = create_sprite_b_ingame(B_EM, (sfVector2f){1670, 8},
    (sfIntRect){0, 0, 231, 152}, (sfVector2f){0.5, 0.5});
    d->p_b[23] = create_sprite_b_ingame(B_TABLE, (sfVector2f){450, 20},
    (sfIntRect){0, 0, 966, 627}, (sfVector2f){0.2, 0.2});
}
