/*
** EPITECH PROJECT, 2022
** place_towers.c
** File description:
** place_towers
*/

#include "my_defender.h"

int disp_attack_five(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 1358 && d->mob[i]->pos.x <= 1521
        && d->mob[i]->pos.y >= 535 && d->mob[i]->pos.y <= 627) {
            move_attack(d, 17);
            loop_display_attack(d, 17, 90);
            shoot_twr -= 1;
        }
    }
    return (shoot_twr);
}

int disp_attack_six(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 1565 && d->mob[i]->pos.x <= 1702
        && d->mob[i]->pos.y >= 398 && d->mob[i]->pos.y <= 558) {
            move_attack(d, 20);
            loop_display_attack(d, 20, 0);
            shoot_twr -= 1;
        }
        if (d->mob[i]->pos.x >= 1389 && d->mob[i]->pos.x <= 1624
        && d->mob[i]->pos.y >= 740 && d->mob[i]->pos.y <= 885) {
            move_attack(d, 22);
            loop_display_attack(d, 22, 180);
            shoot_twr -= 1;
        }
        shoot_twr = disp_attack_six_two(d, shoot_twr, i);
    }
    return (shoot_twr);
}

int disp_attack_six_two(defender_t *d, int shoot_twr, int i)
{
    if (d->mob[i]->pos.x >= 1357 && d->mob[i]->pos.x <= 1520
    && d->mob[i]->pos.y >= 565 && d->mob[i]->pos.y <= 709) {
        move_attack(d, 23);
        loop_display_attack(d, 23, 270);
        shoot_twr -= 1;
    }
    return (shoot_twr);
}
