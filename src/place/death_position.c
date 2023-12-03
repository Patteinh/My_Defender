/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** death_position
*/

#include "my_defender.h"

int disp_attack_one(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 269 && d->mob[i]->pos.x <= 413
        && d->mob[i]->pos.y >= 568 && d->mob[i]->pos.y <= 748) {
            move_attack(d, 1);
            loop_display_attack(d, 1, 90);
            shoot_twr -= 1;
        }
        if (d->mob[i]->pos.x >= 46 && d->mob[i]->pos.x <= 235
        && d->mob[i]->pos.y >= 740 && d->mob[i]->pos.y <= 900) {
            move_attack(d, 2);
            loop_display_attack(d, 2, 180);
            shoot_twr -= 1;
        }
    }
    return (shoot_twr);
}

int disp_attack_two(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 384 && d->mob[i]->pos.x <= 632
            && d->mob[i]->pos.y >= 361 && d->mob[i]->pos.y <= 560) {
            move_attack(d, 4);
            loop_display_attack(d, 4, 0);
            shoot_twr -= 1;
        }
        if (d->mob[i]->pos.x >= 269 && d->mob[i]->pos.x <= 413
        && d->mob[i]->pos.y >= 619 && d->mob[i]->pos.y <= 659) {
            move_attack(d, 7);
            loop_display_attack(d, 7, 270);
            shoot_twr -= 1;
        }
    }
    return (shoot_twr);
}

int disp_attack_three(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 782 && d->mob[i]->pos.x <= 981
        && d->mob[i]->pos.y >= 59 && d->mob[i]->pos.y <= 215) {
            move_attack(d, 8);
            loop_display_attack(d, 8, 0);
            shoot_twr -= 1;
        }
        if (d->mob[i]->pos.x >= 598 && d->mob[i]->pos.x <= 775
        && d->mob[i]->pos.y >= 209 && d->mob[i]->pos.y <= 236) {
            move_attack(d, 11);
            loop_display_attack(d, 11, 270);
            shoot_twr -= 1;
        }
    }
    return (shoot_twr);
}

int disp_attack_four(defender_t *d, int shoot_twr)
{
    for (int i = 0; i <= 11; i++) {
        if (d->mob[i]->pos.x >= 1490 && d->mob[i]->pos.x <= 1659
        && d->mob[i]->pos.y >= 57 && d->mob[i]->pos.y <= 217) {
            move_attack(d, 12);
            loop_display_attack(d, 12, 0);
            shoot_twr -= 1;
        }
        if (d->mob[i]->pos.x >= 1700 && d->mob[i]->pos.x <= 1860
        && d->mob[i]->pos.y >= 216 && d->mob[i]->pos.y <= 405) {
            move_attack(d, 13);
            loop_display_attack(d, 13, 90);
            shoot_twr -= 1;
        }
        shoot_twr = disp_attack_four_two(d, shoot_twr, i);
    }
    return (shoot_twr);
}

int disp_attack_four_two(defender_t *d, int shoot_twr, int i)
{
    if (d->mob[i]->pos.x >= 1490 && d->mob[i]->pos.x <= 1659
        && d->mob[i]->pos.y >= 396 && d->mob[i]->pos.y <= 562) {
            move_attack(d, 14);
            loop_display_attack(d, 14, 180);
            shoot_twr -= 1;
    }
    return (shoot_twr);
}
