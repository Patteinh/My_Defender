/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** loop_move_three
*/

#include "my_defender.h"

void move_e_vik_run(defender_t *d)
{
    int val_max = 5760;

    if (d->u.sec > 0.06) {
        if (d->mob[8]->rect.left >= val_max - 288)
            d->mob[8]->rect.left = 0;
        else
            d->mob[8]->rect.left = d->mob[8]->rect.left + 288;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[8]->sprite, d->mob[8]->pos);
    sfSprite_setScale(d->mob[8]->sprite, d->mob[8]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[8]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[8]->sprite, d->mob[8]->rect);
    move_perso_four(d);
}

void move_e_vik_die(defender_t *d)
{
    int val_max = 5760;

    if (d->u.sec > 0.06) {
        if (d->mob[9]->rect.left >= val_max - 288) {
            d->mob[9]->rect.left = 0;
            DEAD_VIK = -1;
        } else
            d->mob[9]->rect.left = d->mob[9]->rect.left + 288;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[9]->sprite, d->mob[8]->pos);
    sfSprite_setScale(d->mob[9]->sprite, d->mob[9]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[9]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[9]->sprite, d->mob[9]->rect);
}

void move_e_gol_run(defender_t *d)
{
    int val_max = 6940;

    if (d->u.sec > 0.06) {
        if (d->mob[10]->rect.left >= val_max - 347)
            d->mob[10]->rect.left = 0;
        else
            d->mob[10]->rect.left = d->mob[10]->rect.left + 347;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[10]->sprite, d->mob[10]->pos);
    sfSprite_setScale(d->mob[10]->sprite, d->mob[10]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[10]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[10]->sprite, d->mob[10]->rect);
    move_perso_five(d);
}

void move_e_gol_die(defender_t *d)
{
    int val_max = 6940;

    if (d->u.sec > 0.06) {
        if (d->mob[11]->rect.left >= val_max - 347) {
            d->mob[11]->rect.left = 0;
            DEAD_GOL = -1;
        } else
            d->mob[11]->rect.left = d->mob[11]->rect.left + 347;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[11]->sprite, d->mob[10]->pos);
    sfSprite_setScale(d->mob[11]->sprite, d->mob[11]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[11]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[11]->sprite, d->mob[11]->rect);
}
