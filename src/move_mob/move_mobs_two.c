/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_2
*/

#include "my_defender.h"

void move_perso_two(defender_t *d)
{
    if (d->u.key.go2 == 0 && d->mob[4]->pos.x <= 160) {
        d->mob[4]->pos.x += 1;
        if (d->mob[4]->pos.x == 160)
            d->u.key.go2 = 1;
    }
    if (d->u.key.go2 == 1 && d->mob[4]->pos.y >= 620) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.y == 620)
            d->u.key.go2 = 2;
    }
    if (d->u.key.go2 == 2 && d->mob[4]->pos.y >= 460) {
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.y == 462)
            d->u.key.go2 = 3;
    }
    move_perso_continued_sec_one(d);
}

void move_perso_continued_sec_one(defender_t *d)
{
    if (d->u.key.go2 == 3 && d->mob[4]->pos.x <= 350) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.x >= 349) {
            d->u.key.go2 = 4;
        }
    }
    if (d->u.key.go2 == 4 && d->mob[4]->pos.x <= 470) {
        d->mob[4]->pos.x += 1;
        if (d->mob[4]->pos.x == 469)
            d->u.key.go2 = 5;
    }
    if (d->u.key.go2 == 5 && d->mob[4]->pos.x <= 600) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.x == 599)
            d->u.key.go2 = 6;
    }
    move_perso_continued_sec_two(d);
}

void move_perso_continued_sec_two(defender_t *d)
{
    if (d->u.key.go2 == 6 && d->mob[4]->pos.y >= 100) {
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.y == 99)
            d->u.key.go2 = 3030;
    }
    if (d->u.key.go2 == 3030 && d->mob[4]->pos.y >= 40) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y -= 1;
        if (d->mob[4]->pos.y == 41)
            d->u.key.go2 = 7;
    }
    if (d->u.key.go2 == 7 && d->mob[4]->pos.x <= 1630) {
        d->mob[4]->pos.x += 1;
        if (d->mob[4]->pos.x == 1628)
            d->u.key.go2 = 8;
    }
    move_perso_continued_sec_three(d);
}

void move_perso_continued_sec_three(defender_t *d)
{
    if (d->u.key.go2 == 8 && d->mob[4]->pos.y <= 175) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 173)
            d->u.key.go2 = 9;
    }
    if (d->u.key.go2 == 9 && d->mob[4]->pos.y <= 212) {
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 210)
            d->u.key.go2 = 10;
    }
    if (d->u.key.go2 == 10 && d->mob[4]->pos.y <= 383) {
        d->mob[4]->pos.x -= 1;
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 381)
            d->u.key.go2 = 11;
    }
    move_perso_continued_sec_four(d);
}

void move_perso_continued_sec_four(defender_t *d)
{
    if (d->u.key.go2 == 11 && d->mob[4]->pos.x >= 1480) {
        d->mob[4]->pos.x -= 1;
        if (d->mob[4]->pos.x == 1482)
            d->u.key.go2 = 12;
    }
    if (d->u.key.go2 == 12 && d->mob[4]->pos.y <= 490) {
        d->mob[4]->pos.x -= 1;
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 488)
            d->u.key.go2 = 13;
    }
    if (d->u.key.go2 == 13 && d->mob[4]->pos.y <= 645) {
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 643)
            d->u.key.go2 = 14;
    }
    move_perso_continued_five(d);
}
