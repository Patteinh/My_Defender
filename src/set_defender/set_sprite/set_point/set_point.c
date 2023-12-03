/*
** EPITECH PROJECT, 2022
** set_point.c
** File description:
** set_point
*/

#include "my_defender.h"

void set_point(defender_t *d)
{
    for (int i = 0; i != 24; i++)
        d->point[i] = NULL;
    d->point[0] = create_point_red(FONT, (sfVector2f){110, 610}, "X", 80);
    d->point[1] = create_point_red(FONT, (sfVector2f){510, 580}, "X", 80);
    d->point[2] = create_point_red(FONT, (sfVector2f){860, 230}, "X", 80);
    d->point[3] = create_point_red(FONT, (sfVector2f){1550, 250}, "X", 80);
    d->point[4] = create_point_red(FONT, (sfVector2f){1210, 530}, "X", 80);
    d->point[5] = create_point_red(FONT, (sfVector2f){1620, 580}, "X", 80);
    d->point[6] = create_point_blue(FONT, (sfVector2f){110, 610}, "X", 80);
    d->point[7] = create_point_blue(FONT, (sfVector2f){510, 580}, "X", 80);
    d->point[8] = create_point_blue(FONT, (sfVector2f){860, 230}, "X", 80);
    d->point[9] = create_point_blue(FONT, (sfVector2f){1550, 250}, "X", 80);
    set_point_two(d);
}

void set_point_two(defender_t *d)
{
    d->point[10] = create_point_blue(FONT, (sfVector2f){1210, 530}, "X", 80);
    d->point[11] = create_point_blue(FONT, (sfVector2f){1620, 580}, "X", 80);
    d->point[12] = create_point_green(FONT, (sfVector2f){110, 610}, "X", 80);
    d->point[13] = create_point_green(FONT, (sfVector2f){510, 580}, "X", 80);
    d->point[14] = create_point_green(FONT, (sfVector2f){860, 230}, "X", 80);
    d->point[15] = create_point_green(FONT, (sfVector2f){1550, 250}, "X", 80);
    d->point[16] = create_point_green(FONT, (sfVector2f){1210, 530}, "X", 80);
    d->point[17] = create_point_green(FONT, (sfVector2f){1620, 580}, "X", 80);
    d->point[18] = create_point_yellow(FONT, (sfVector2f){110, 610}, "X", 80);
    d->point[19] = create_point_yellow(FONT, (sfVector2f){510, 580}, "X", 80);
    d->point[20] = create_point_yellow(FONT, (sfVector2f){860, 230}, "X", 80);
    d->point[21] = create_point_yellow(FONT, (sfVector2f){1550, 250}, "X", 80);
    d->point[22] = create_point_yellow(FONT, (sfVector2f){1210, 530}, "X", 80);
    d->point[23] = create_point_yellow(FONT, (sfVector2f){1620, 580}, "X", 80);
}
