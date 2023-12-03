/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** movement_mobs_4_2
*/

#include "my_defender.h"

void move_perso_continued_five_four(defender_t *d)
{
    if (d->u.key.go4 == 13 && d->mob[8]->pos.y <= 645) {
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 643)
            d->u.key.go4 = 14;
    }
    if (d->u.key.go4 == 14 && d->mob[8]->pos.y <= 705) {
        d->mob[8]->pos.x += 1;
        d->mob[8]->pos.y += 1;
        if (d->mob[8]->pos.y == 703)
            d->u.key.go4 = 15;
    }
    if (d->u.key.go4 == 15 && d->mob[8]->pos.x <= 1730) {
        d->mob[8]->pos.x += 1;
        if (d->mob[8]->pos.x == 1728)
            d->u.key.go = 16;
    }
    if (d->u.key.go == 16 && d->mob[8]->pos.x >= 1720) {
        d->u.life.nbr_mobs_win++;
        d->u.key.go = 17;
    }
}
