/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** move_mobss
*/

#include "my_defender.h"

void move_perso_continued_vi_five_check(defender_t *d)
{
    if (d->u.key.go == 15 && d->mob[0]->pos.x <= 1730) {
        d->mob[0]->pos.x += 1;
        if (d->mob[0]->pos.x == 1728)
            d->u.key.go = 16;
    }
    if (d->u.key.go == 16 && d->mob[0]->pos.x >= 1720) {
        d->u.life.nbr_mobs_win++;
        d->u.key.go = 17;
    }
}
