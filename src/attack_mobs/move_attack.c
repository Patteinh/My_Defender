/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** attack_mobs
*/

#include "my_defender.h"

void move_attack(defender_t *d, int i)
{
    int val_max = 269;

    if (d->u.sec > 0.05) {
        if (d->attack[i]->rect.top > val_max)
            d->attack[i]->rect.top = 0;
        else
            d->attack[i]->rect.top = d->attack[i]->rect.top + 138;
        sfClock_restart(d->u.clock);
    }
}
