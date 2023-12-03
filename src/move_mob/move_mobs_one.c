/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_1
*/

#include "my_defender.h"

void move_perso_one(defender_t *d)
{
    if (d->u.key.go1 == 0 && d->mob[2]->pos.x <= 160) {
        d->mob[2]->pos.x += 1;
        if (d->mob[2]->pos.x == 160)
            d->u.key.go1 = 1;
    }
    if (d->u.key.go1 == 1 && d->mob[2]->pos.y >= 620) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.y == 620)
            d->u.key.go1 = 2;
    }
    if (d->u.key.go1 == 2 && d->mob[2]->pos.y >= 460) {
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.y == 462)
            d->u.key.go1 = 3;
    }
    move_perso_continued_on_one(d);
}

void move_perso_continued_on_one(defender_t *d)
{
    if (d->u.key.go1 == 3 && d->mob[2]->pos.x <= 350) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.x >= 349) {
            d->u.key.go1 = 4;
        }
    }
    if (d->u.key.go1 == 4 && d->mob[2]->pos.x <= 470) {
        d->mob[2]->pos.x += 1;
        if (d->mob[2]->pos.x == 469)
            d->u.key.go1 = 5;
    }
    if (d->u.key.go1 == 5 && d->mob[2]->pos.x <= 600) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.x == 599)
            d->u.key.go1 = 6;
    }
    move_perso_continued_on_two(d);
}

void move_perso_continued_on_two(defender_t *d)
{
    if (d->u.key.go1 == 6 && d->mob[2]->pos.y >= 100) {
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.y == 99)
            d->u.key.go1 = 3030;
    }
    if (d->u.key.go1 == 3030 && d->mob[2]->pos.y >= 60) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y -= 1;
        if (d->mob[2]->pos.y == 61)
            d->u.key.go1 = 7;
    }
    if (d->u.key.go1 == 7 && d->mob[2]->pos.x <= 1630) {
        d->mob[2]->pos.x += 1;
        if (d->mob[2]->pos.x == 1628)
            d->u.key.go1 = 8;
    }
    move_perso_continued_on_three(d);
}
