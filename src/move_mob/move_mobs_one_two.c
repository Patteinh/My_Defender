/*
** EPITECH PROJECT, 2022
** moove_mobs_one_two.c
** File description:
** moove_mobs_one_two
*/

#include "my_defender.h"

void move_perso_continued_on_three(defender_t *d)
{
    if (d->u.key.go1 == 8 && d->mob[2]->pos.y <= 175) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 173)
            d->u.key.go1 = 9;
    }
    if (d->u.key.go1 == 9 && d->mob[2]->pos.y <= 212) {
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 210)
            d->u.key.go1 = 10;
    }
    if (d->u.key.go1 == 10 && d->mob[2]->pos.y <= 383) {
        d->mob[2]->pos.x -= 1;
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 381)
            d->u.key.go1 = 11;
    }
    move_perso_continued_on_three_two(d);
    move_perso_continued_on_four(d);
}

void move_perso_continued_on_three_two(defender_t *d)
{
    if (d->u.key.go1 == 11 && d->mob[2]->pos.x >= 1480) {
        d->mob[2]->pos.x -= 1;
        if (d->mob[2]->pos.x == 1482)
            d->u.key.go1 = 12;
    }
}

void move_perso_continued_on_four(defender_t *d)
{
    if (d->u.key.go1 == 12 && d->mob[2]->pos.y <= 450) {
        d->mob[2]->pos.x -= 1;
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 448)
            d->u.key.go1 = 13;
    }
    if (d->u.key.go1 == 13 && d->mob[2]->pos.y <= 620) {
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 618)
            d->u.key.go1 = 14;
    }
    if (d->u.key.go1 == 14 && d->mob[2]->pos.y <= 705) {
        d->mob[2]->pos.x += 1;
        d->mob[2]->pos.y += 1;
        if (d->mob[2]->pos.y == 703)
            d->u.key.go1 = 15;
    }
    move_perso_continued_on_five_check(d);
}

void move_perso_continued_on_five_check(defender_t *d)
{
    if (d->u.key.go1 == 15 && d->mob[2]->pos.x <= 1730) {
        d->mob[2]->pos.x += 1;
        if (d->mob[2]->pos.x == 1728)
            d->u.key.go = 16;
    }
    if (d->u.key.go == 16 && d->mob[2]->pos.x >= 1720) {
        d->u.life.nbr_mobs_win++;
        d->u.key.go = 17;
    }
}
