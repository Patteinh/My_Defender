/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs
*/

#include "my_defender.h"

void move_perso(defender_t *d)
{
    if (d->u.key.go == 0 && d->mob[0]->pos.x <= 180) {
        d->mob[0]->pos.x += 1;
        if (d->mob[0]->pos.x == 180)
            d->u.key.go = 1;
    }
    if (d->u.key.go == 1 && d->mob[0]->pos.y >= 620) {
        d->mob[0]->pos.x += 1;
        d->mob[0]->pos.y -= 1;
        if (d->mob[0]->pos.y == 620)
            d->u.key.go = 2;
    }
    if (d->u.key.go == 2 && d->mob[0]->pos.y >= 460) {
        d->mob[0]->pos.y -= 1;
        if (d->mob[0]->pos.y == 462)
            d->u.key.go = 3;
    }
    move_perso_continued_vi_one(d);
}

void move_perso_continued_vi_one(defender_t *d)
{
    if (d->u.key.go == 3 && d->mob[0]->pos.x <= 350) {
        d->mob[0]->pos.x += 1;
        d->mob[0]->pos.y -= 1;
        if (d->mob[0]->pos.x >= 349) {
            d->u.key.go = 4;
        }
    }
    if (d->u.key.go == 4 && d->mob[0]->pos.x <= 470) {
        d->mob[0]->pos.x += 1;
        if (d->mob[0]->pos.x == 469)
            d->u.key.go = 5;
    }
    if (d->u.key.go == 5 && d->mob[0]->pos.x <= 640) {
        d->mob[0]->pos.x += 1;
        d->mob[0]->pos.y -= 1;
        if (d->mob[0]->pos.x == 639)
            d->u.key.go = 6;
    }
    move_perso_continued_vi_two(d);
}

void move_perso_continued_vi_two(defender_t *d)
{
    if (d->u.key.go == 6 && d->mob[0]->pos.y >= 39) {
        d->mob[0]->pos.y -= 1;
        if (d->mob[0]->pos.y == 40)
            d->u.key.go = 7;
    }
    if (d->u.key.go == 7 && d->mob[0]->pos.x <= 1630) {
        d->mob[0]->pos.x += 1;
        if (d->mob[0]->pos.x == 1628)
            d->u.key.go = 8;
    }
    if (d->u.key.go == 8 && d->mob[0]->pos.y <= 195) {
        d->mob[0]->pos.x += 1;
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 193)
            d->u.key.go = 9;
    }
    move_perso_continued_vi_three(d);
}

void move_perso_continued_vi_three(defender_t *d)
{
    if (d->u.key.go == 9 && d->mob[0]->pos.y <= 212) {
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 210)
            d->u.key.go = 10;
    }
    if (d->u.key.go == 10 && d->mob[0]->pos.y <= 383) {
        d->mob[0]->pos.x -= 1;
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 381)
            d->u.key.go = 11;
    }
    if (d->u.key.go == 11 && d->mob[0]->pos.x >= 1480) {
        d->mob[0]->pos.x -= 1;
        if (d->mob[0]->pos.x == 1482)
            d->u.key.go = 12;
    }
    move_perso_continued_vi_four(d);
}

void move_perso_continued_vi_four(defender_t *d)
{
    if (d->u.key.go == 12 && d->mob[0]->pos.y <= 450) {
        d->mob[0]->pos.x -= 1;
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 448)
            d->u.key.go = 13;
    }
    if (d->u.key.go == 13 && d->mob[0]->pos.y <= 620) {
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 618)
            d->u.key.go = 14;
    }
    if (d->u.key.go == 14 && d->mob[0]->pos.y <= 705) {
        d->mob[0]->pos.x += 1;
        d->mob[0]->pos.y += 1;
        if (d->mob[0]->pos.y == 703)
            d->u.key.go = 15;
    }
    move_perso_continued_vi_five_check(d);
}
