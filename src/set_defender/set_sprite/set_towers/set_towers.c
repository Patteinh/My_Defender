/*
** EPITECH PROJECT, 2022
** set_towers.c
** File description:
** set_towers
*/

#include "my_defender.h"

void set_towers(defender_t *d)
{
    d->towers.blue = malloc(sizeof(blue_t) * 6);
    d->towers.blue[0] = create_sprite_t_b(B_B_T, (sfVector2f){50, 550},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    d->towers.blue[1] = create_sprite_t_b(B_B_T, (sfVector2f){450, 520},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    d->towers.blue[2] = create_sprite_t_b(B_B_T, (sfVector2f){800, 160},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    d->towers.blue[3] = create_sprite_t_b(B_B_T, (sfVector2f){1490, 190},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    d->towers.blue[4] = create_sprite_t_b(B_B_T, (sfVector2f){1150, 460},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    d->towers.blue[5] = create_sprite_t_b(B_B_T, (sfVector2f){1560, 520},
    (sfIntRect){0, 0, 177, 182}, (sfVector2f){0.2, 0.2});
    set_towers_two(d);
    set_towers_three(d);
    set_towers_fo(d);
}

void set_towers_two(defender_t *d)
{
    d->towers.red = malloc(sizeof(red_t) * 6);
    d->towers.red[0] = create_sprite_t_r(B_R_T, (sfVector2f){50, 420},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
    d->towers.red[1] = create_sprite_t_r(B_R_T, (sfVector2f){450, 390},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
    d->towers.red[2] = create_sprite_t_r(B_R_T, (sfVector2f){800, 30},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
    d->towers.red[3] = create_sprite_t_r(B_R_T, (sfVector2f){1490, 60},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
    d->towers.red[4] = create_sprite_t_r(B_R_T, (sfVector2f){1150, 330},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
    d->towers.red[5] = create_sprite_t_r(B_R_T, (sfVector2f){1560, 390},
    (sfIntRect){0, 0, 162, 311}, (sfVector2f){0.2, 0.2});
}

void set_towers_three(defender_t *d)
{
    d->towers.green = malloc(sizeof(green_t) * 6);
    d->towers.green[0] = create_sprite_t_g(B_G_T, (sfVector2f){50, 550},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
    d->towers.green[1] = create_sprite_t_g(B_G_T, (sfVector2f){450, 520},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
    d->towers.green[2] = create_sprite_t_g(B_G_T, (sfVector2f){800, 160},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
    d->towers.green[3] = create_sprite_t_g(B_G_T, (sfVector2f){1490, 190},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
    d->towers.green[4] = create_sprite_t_g(B_G_T, (sfVector2f){1150, 460},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
    d->towers.green[5] = create_sprite_t_g(B_G_T, (sfVector2f){1560, 520},
    (sfIntRect){0, 0, 178, 179}, (sfVector2f){0.2, 0.2});
}

void set_towers_fo(defender_t *d)
{
    d->towers.yellow = malloc(sizeof(yellow_t) * 6);
    d->towers.house = malloc(sizeof(house_t) * 1);
    d->towers.yellow[0] = create_sprite_t_y(B_Y_T, (sfVector2f){50, 550},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.yellow[1] = create_sprite_t_y(B_Y_T, (sfVector2f){450, 520},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.yellow[2] = create_sprite_t_y(B_Y_T, (sfVector2f){800, 160},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.yellow[3] = create_sprite_t_y(B_Y_T, (sfVector2f){1490, 190},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.yellow[4] = create_sprite_t_y(B_Y_T, (sfVector2f){1150, 460},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.yellow[5] = create_sprite_t_y(B_Y_T, (sfVector2f){1560, 520},
    (sfIntRect){0, 0, 175, 188}, (sfVector2f){0.2, 0.2});
    d->towers.house[0] = create_sprite_house("assets/bases/base.png",
    (sfVector2f){1700, 698}, (sfIntRect){0, 0, 185, 180}, (sfVector2f){1, 1});
}
