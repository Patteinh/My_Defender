/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_2_2
*/

#include "my_defender.h"

void move_perso_continued_five(defender_t *d)
{
    if (d->u.key.go2 == 14 && d->mob[4]->pos.y <= 705) {
        d->mob[4]->pos.x += 1;
        d->mob[4]->pos.y += 1;
        if (d->mob[4]->pos.y == 703)
            d->u.key.go2 = 15;
    }
    if (d->u.key.go2 == 15 && d->mob[4]->pos.x <= 1730) {
        d->mob[4]->pos.x += 1;
        if (d->mob[4]->pos.x == 1728)
            d->u.key.go = 16;
    }
    if (d->u.key.go == 16 && d->mob[4]->pos.x >= 1720) {
        d->u.life.nbr_mobs_win++;
        d->u.key.go = 17;
    }
}
