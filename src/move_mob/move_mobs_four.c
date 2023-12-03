/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_4
*/

#include "my_defender.h"

void move_perso_four(defender_t *d)
{
    if (d->u.key.go4 == 0 && d->mob[8]->pos.x <= 160) {
        d->mob[8]->pos.x += 1;
        if (d->mob[8]->pos.x == 160)
            d->u.key.go4 = 1;
    }
    if (d->u.key.go4 == 1 && d->mob[8]->pos.y >= 620) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.y == 620)
            d->u.key.go4 = 2;
    }
    if (d->u.key.go4 == 2 && d->mob[8]->pos.y >= 460) {
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.y == 462)
            d->u.key.go4 = 3;
    }
    move_perso_continued_for_one(d);
}

void move_perso_continued_for_one(defender_t *d)
{
    if (d->u.key.go4 == 3 && d->mob[8]->pos.x <= 350) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.x >= 349) {
            d->u.key.go4 = 4;
        }
    }
    if (d->u.key.go4 == 4 && d->mob[8]->pos.x <= 470) {
        d->mob[8]->pos.x += 1;
        if (d->mob[8]->pos.x == 469)
            d->u.key.go4 = 5;
    }
    if (d->u.key.go4 == 5 && d->mob[8]->pos.x <= 650) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.x == 649)
            d->u.key.go4 = 6;
    }
    move_perso_continued_for_two(d);
}

void move_perso_continued_for_two(defender_t *d)
{
    if (d->u.key.go4 == 6 && d->mob[8]->pos.y >= 100) {
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.y == 99)
            d->u.key.go4 = 3030;
    }
    if (d->u.key.go4 == 3030 && d->mob[8]->pos.y >= 85) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y -= 1;
        if (d->mob[8]->pos.y == 86)
            d->u.key.go4 = 7;
    }
    if (d->u.key.go4 == 7 && d->mob[8]->pos.x <= 1630) {
        d->mob[8]->pos.x += 1;
        if (d->mob[8]->pos.x == 1628)
            d->u.key.go4 = 8;
    }
    move_perso_continued_for_three(d);
}

void move_perso_continued_for_three(defender_t *d)
{
    if (d->u.key.go4 == 8 && d->mob[8]->pos.y <= 175) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 173)
            d->u.key.go4 = 9;
    }
    if (d->u.key.go4 == 9 && d->mob[8]->pos.y <= 260) {
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 258)
            d->u.key.go4 = 10;
    }
    if (d->u.key.go4 == 10 && d->mob[8]->pos.y <= 383) {
        d->mob[8]->pos.x -= 1;
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 381)
            d->u.key.go4 = 11;
    }
    move_perso_continued_for_four(d);
}

void move_perso_continued_for_four(defender_t *d)
{
    if (d->u.key.go4 == 11 && d->mob[8]->pos.x >= 1480) {
        d->mob[8]->pos.x -= 1;
        if (d->mob[8]->pos.x == 1482)
            d->u.key.go4 = 12;
    }
    if (d->u.key.go4 == 12 && d->mob[8]->pos.y <= 490) {
        d->mob[8]->pos.x -= 1;
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 488)
            d->u.key.go4 = 2020;
    }
    if (d->u.key.go4 == 2020 && d->mob[8]->pos.y <= 580) {
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 578)
            d->u.key.go4 = 13;
    }
    move_perso_continued_five_four(d);
}
