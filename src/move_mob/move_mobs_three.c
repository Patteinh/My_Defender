/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_3
*/

#include "my_defender.h"

void move_perso_three(defender_t *d)
{
    if (d->u.key.go3 == 0 && d->mob[6]->pos.x <= 160) {
        d->mob[6]->pos.x += 1;
        if (d->mob[6]->pos.x == 160)
            d->u.key.go3 = 1;
    }
    if (d->u.key.go3 == 1 && d->mob[6]->pos.y >= 620) {
        d->mob[6]->pos.x += 1;
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.y == 620)
            d->u.key.go3 = 2;
    }
    if (d->u.key.go3 == 2 && d->mob[6]->pos.y >= 460) {
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.y == 462)
            d->u.key.go3 = 3;
    }
    move_perso_continued_three_one(d);
}

void move_perso_continued_three_one(defender_t *d)
{
    if (d->u.key.go3 == 3 && d->mob[6]->pos.x <= 350) {
        d->mob[6]->pos.x += 1;
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.x >= 349) {
            d->u.key.go3 = 4;
        }
    }
    if (d->u.key.go3 == 4 && d->mob[6]->pos.x <= 470) {
        d->mob[6]->pos.x += 1;
        if (d->mob[6]->pos.x == 469)
            d->u.key.go3 = 5;
    }
    if (d->u.key.go3 == 5 && d->mob[6]->pos.x <= 600) {
        d->mob[6]->pos.x += 1;
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.x == 599)
            d->u.key.go3 = 6;
    }
    move_perso_continued_three_two(d);
}

void move_perso_continued_three_two(defender_t *d)
{
    if (d->u.key.go3 == 6 && d->mob[6]->pos.y >= 100) {
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.y == 99)
            d->u.key.go3 = 3030;
    }
    if (d->u.key.go3 == 3030 && d->mob[6]->pos.y >= 40) {
        d->mob[6]->pos.x += 1;
        d->mob[6]->pos.y -= 1;
        if (d->mob[6]->pos.y == 41)
            d->u.key.go3 = 7;
    }
    if (d->u.key.go3 == 7 && d->mob[6]->pos.x <= 1630) {
        d->mob[6]->pos.x += 1;
        if (d->mob[6]->pos.x == 1628)
            d->u.key.go3 = 8;
    }
    move_perso_continued_three_three(d);
}

void move_perso_continued_three_three(defender_t *d)
{
    if (d->u.key.go3 == 8 && d->mob[6]->pos.y <= 175) {
        d->mob[6]->pos.x += 1;
        d->mob[6]->pos.y += 1;
        if (d->mob[6]->pos.y == 173)
            d->u.key.go3 = 9;
    }
    if (d->u.key.go3 == 9 && d->mob[6]->pos.y <= 260) {
        d->mob[6]->pos.y += 1;
        if (d->mob[6]->pos.y == 258)
            d->u.key.go3 = 10;
    }
    if (d->u.key.go3 == 10 && d->mob[6]->pos.y <= 383) {
        d->mob[6]->pos.x -= 1;
        d->mob[6]->pos.y += 1;
        if (d->mob[6]->pos.y == 381)
            d->u.key.go3 = 11;
    }
    move_perso_continued_three_four(d);
}

void move_perso_continued_three_four(defender_t *d)
{
    if (d->u.key.go3 == 11 && d->mob[6]->pos.x >= 1480) {
        d->mob[6]->pos.x -= 1;
        if (d->mob[6]->pos.x == 1482)
            d->u.key.go3 = 12;
    }
    if (d->u.key.go3 == 12 && d->mob[6]->pos.y <= 490) {
        d->mob[6]->pos.x -= 1;
        d->mob[6]->pos.y += 1;
        if (d->mob[6]->pos.y == 488)
            d->u.key.go3 = 2020;
    }
    if (d->u.key.go3 == 2020 && d->mob[6]->pos.y <= 580) {
        d->mob[6]->pos.y += 1;
        if (d->mob[6]->pos.y == 578)
            d->u.key.go3 = 13;
    }
    move_perso_continued_five_three(d);
}
