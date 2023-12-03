/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** loop_move_two
*/

#include "my_defender.h"

void move_e_haxe_run(defender_t *d)
{
    int val_max = 7600;

    if (d->u.sec > 0.05) {
        if (d->mob[4]->rect.left >= val_max - 399)
            d->mob[4]->rect.left = 0;
        else
            d->mob[4]->rect.left = d->mob[4]->rect.left + 380;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[4]->sprite, d->mob[4]->pos);
    sfSprite_setScale(d->mob[4]->sprite, d->mob[4]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[4]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[4]->sprite, d->mob[4]->rect);
    move_perso_two(d);
}

void move_e_haxe_die(defender_t *d)
{
    int val_max = 7600;

    if (d->u.sec > 0.06) {
        if (d->mob[5]->rect.left >= val_max - 399) {
            d->mob[5]->rect.left = 0;
            DEAD_HAXE = -1;
        } else
            d->mob[5]->rect.left = d->mob[5]->rect.left + 380;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[5]->sprite, d->mob[4]->pos);
    sfSprite_setScale(d->mob[5]->sprite, d->mob[5]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[5]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[5]->sprite, d->mob[5]->rect);
}

void move_e_red_run(defender_t *d)
{
    int val_max = 5880;

    if (d->u.sec > 0.05) {
        if (d->mob[6]->rect.left >= val_max - 578)
            d->mob[6]->rect.left = 0;
        else
            d->mob[6]->rect.left = d->mob[6]->rect.left + 294;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[6]->sprite, d->mob[6]->pos);
    sfSprite_setScale(d->mob[6]->sprite, d->mob[6]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[6]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[6]->sprite, d->mob[6]->rect);
    move_perso_three(d);
}

void move_e_red_die(defender_t *d)
{
    int val_max = 5880;

    if (d->u.sec > 0.06) {
        if (d->mob[7]->rect.left >= val_max - 578) {
            d->mob[7]->rect.left = 0;
            DEAD_RED = -1;
        } else
            d->mob[7]->rect.left = d->mob[7]->rect.left + 294;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[7]->sprite, d->mob[6]->pos);
    sfSprite_setScale(d->mob[7]->sprite, d->mob[7]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[7]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[7]->sprite, d->mob[7]->rect);
}
