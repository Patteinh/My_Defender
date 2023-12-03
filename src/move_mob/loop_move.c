/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** moving_mob_two
*/

#include "my_defender.h"

void move_e_sword_run(defender_t *d)
{
    int val_max = 8900;

    if (d->u.sec > 0.05) {
        if (d->mob[0]->rect.left >= val_max - 445)
            d->mob[0]->rect.left = 0;
        else
            d->mob[0]->rect.left = d->mob[0]->rect.left + 445;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[0]->sprite, d->mob[0]->pos);
    sfSprite_setScale(d->mob[0]->sprite, d->mob[0]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[0]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[0]->sprite, d->mob[0]->rect);
    move_perso(d);
}

void move_e_sword_die(defender_t *d)
{
    int val_max = 8900;

    if (d->u.sec > 0.05) {
        if (d->mob[1]->rect.left >= val_max - 445) {
            d->mob[1]->rect.left = 0;
            DEAD_SWORD = -1;
        } else
            d->mob[1]->rect.left = d->mob[1]->rect.left + 445;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[1]->sprite, d->mob[0]->pos);
    sfSprite_setScale(d->mob[1]->sprite, d->mob[1]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[1]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[1]->sprite, d->mob[1]->rect);
}

void move_e_gob_run(defender_t *d)
{
    int val_max = 6200;

    if (d->u.sec > 0.06) {
        if (d->mob[2]->rect.left >= val_max - 600)
            d->mob[2]->rect.left = 0;
        else
            d->mob[2]->rect.left = d->mob[2]->rect.left + 301;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[2]->sprite, d->mob[2]->pos);
    sfSprite_setScale(d->mob[2]->sprite, d->mob[2]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[2]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[2]->sprite, d->mob[2]->rect);
    move_perso_one(d);
}

void move_e_gob_die(defender_t *d)
{
    int val_max = 6200;

    if (d->u.sec > 0.06) {
        if (d->mob[3]->rect.left >= val_max - 600) {
            d->mob[3]->rect.left = 0;
            DEAD_GOB = -1;
        } else
            d->mob[3]->rect.left = d->mob[3]->rect.left + 301;
        sfClock_restart(d->u.clock);
    }
    sfSprite_setPosition(d->mob[3]->sprite, d->mob[2]->pos);
    sfSprite_setScale(d->mob[3]->sprite, d->mob[3]->scale);
    sfRenderWindow_drawSprite(d->window, d->mob[3]->sprite, NULL);
    sfSprite_setTextureRect(d->mob[3]->sprite, d->mob[3]->rect);

}
