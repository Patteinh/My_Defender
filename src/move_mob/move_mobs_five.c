/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_5
*/

#include "my_defender.h"

void move_perso_five(defender_t *d)
{
    if (d->u.key.go5 == 0 && d->mob[10]->pos.x <= 160) {
        d->mob[10]->pos.x += 1;
        if (d->mob[10]->pos.x == 160)
            d->u.key.go5 = 1;
    }
    if (d->u.key.go5 == 1 && d->mob[10]->pos.y >= 620) {
        d->mob[10]->pos.x += 1;
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.y == 620)
            d->u.key.go5 = 2;
    }
    if (d->u.key.go5 == 2 && d->mob[10]->pos.y >= 460) {
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.y == 462)
            d->u.key.go5 = 3;
    }
    move_perso_continued_fiv_one(d);
}

void move_perso_continued_fiv_one(defender_t *d)
{
    if (d->u.key.go5 == 3 && d->mob[10]->pos.x <= 350) {
        d->mob[10]->pos.x += 1;
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.x >= 349) {
            d->u.key.go5 = 4;
        }
    }
    if (d->u.key.go5 == 4 && d->mob[10]->pos.x <= 470) {
        d->mob[10]->pos.x += 1;
        if (d->mob[10]->pos.x == 469)
            d->u.key.go5 = 5;
    }
    if (d->u.key.go5 == 5 && d->mob[10]->pos.x <= 600) {
        d->mob[10]->pos.x += 1;
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.x == 599)
            d->u.key.go5 = 6;
    }
    move_perso_continued_fiv_two(d);
}

void move_perso_continued_fiv_two(defender_t *d)
{
    if (d->u.key.go5 == 6 && d->mob[10]->pos.y >= 100) {
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.y == 99)
            d->u.key.go5 = 3030;
    }
    if (d->u.key.go5 == 3030 && d->mob[10]->pos.y >= 60) {
        d->mob[10]->pos.x += 1;
        d->mob[10]->pos.y -= 1;
        if (d->mob[10]->pos.y == 61)
            d->u.key.go5 = 7;
    }
    if (d->u.key.go5 == 7 && d->mob[10]->pos.x <= 1630) {
        d->mob[10]->pos.x += 1;
        if (d->mob[10]->pos.x == 1628)
            d->u.key.go5 = 8;
    }
    move_perso_continued_fiv_three(d);
}

void move_perso_continued_fiv_three(defender_t *d)
{
    if (d->u.key.go5 == 8 && d->mob[10]->pos.y <= 175) {
        d->mob[10]->pos.x += 1;
        d->mob[10]->pos.y += 1;
        if (d->mob[10]->pos.y == 173)
            d->u.key.go5 = 9;
    }
    if (d->u.key.go5 == 9 && d->mob[10]->pos.y <= 212) {
        d->mob[10]->pos.y += 1;
        if (d->mob[10]->pos.y == 210)
            d->u.key.go5 = 10;
    }
    if (d->u.key.go5 == 10 && d->mob[10]->pos.y <= 383) {
        d->mob[10]->pos.x -= 1;
        d->mob[10]->pos.y += 1;
        if (d->mob[10]->pos.y == 381)
            d->u.key.go5 = 11;
    }
    move_perso_continued_fiv_four(d);
}

void move_perso_continued_fiv_four(defender_t *d)
{
    if (d->u.key.go5 == 11 && d->mob[10]->pos.x >= 1480) {
        d->mob[10]->pos.x -= 1;
        if (d->mob[10]->pos.x == 1482)
            d->u.key.go5 = 12;
    }
    if (d->u.key.go5 == 12 && d->mob[10]->pos.y <= 450) {
        d->mob[10]->pos.x -= 1;
        d->mob[10]->pos.y += 1;
        if (d->mob[10]->pos.y == 448)
            d->u.key.go5 = 13;
    }
    if (d->u.key.go5 == 13 && d->mob[10]->pos.y <= 620) {
        d->mob[10]->pos.y += 1;
        if (d->mob[10]->pos.y == 618)
            d->u.key.go5 = 14;
    }
    move_perso_continued_five_five(d);
}
