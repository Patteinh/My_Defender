/*
** EPITECH PROJECT, 2022
** select_disp_spell.c
** File description:
** select_disp_spell
*/

#include "my_defender.h"

void disp_spell_one(defender_t *d)
{
    // if (d->u.select_spell.s1 == 1) {
    //     if (d->spell[0]->rect.top < 8181) {
    //         d->spell[0]->rect.top += 909;
    //         sfSprite_setTextureRect(d->spell[0]->sprite, d->spell[0]->rect);
    //     }
    //     sfRenderWindow_drawSprite(d->window, d->spell[0]->sprite, NULL);
    //     if (d->spell[0]->rect.top == 8181) {
    //         d->spell[0]->rect.top = 0;
    //         sfSprite_setTextureRect(d->spell[0]->sprite, d->spell[0]->rect);
    //         d->u.select_spell.s1 = 0;
    //     }
    // }
}

void disp_spell_two(defender_t *d)
{
    if (d->u.select_spell.s2 == 1) {
        if (d->spell[3]->rect.top < 14690) {
            d->spell[3]->rect.top += 1130;
            sfSprite_setTextureRect(d->spell[3]->sprite, d->spell[3]->rect);
        }
        sfRenderWindow_drawSprite(d->window, d->spell[3]->sprite, NULL);
        if (d->spell[3]->rect.top == 14690) {
            d->spell[3]->rect.top = 0;
            sfSprite_setTextureRect(d->spell[3]->sprite, d->spell[3]->rect);
            d->u.select_spell.s2 = 0;
        }
    }
}

void disp_spell_three(defender_t *d)
{
    if (d->u.select_spell.s3 == 1) {
        if (d->spell[2]->rect.top < 8181) {
            d->spell[2]->rect.top += 909;
            sfSprite_setTextureRect(d->spell[2]->sprite, d->spell[2]->rect);
        }
        sfRenderWindow_drawSprite(d->window, d->spell[2]->sprite, NULL);
        if (d->spell[2]->rect.top == 8181) {
            d->spell[2]->rect.top = 0;
            sfSprite_setTextureRect(d->spell[2]->sprite, d->spell[2]->rect);
            d->u.select_spell.s3 = 0;
        }
    }
}

void disp_spell_four(defender_t *d)
{
    if (d->u.select_spell.s4 == 1) {
        if (d->spell[1]->rect.top < 8181) {
            d->spell[1]->rect.top += 909;
            sfSprite_setTextureRect(d->spell[1]->sprite, d->spell[1]->rect);
        }
        sfRenderWindow_drawSprite(d->window, d->spell[1]->sprite, NULL);
        if (d->spell[1]->rect.top == 8181) {
            d->spell[1]->rect.top = 0;
            sfSprite_setTextureRect(d->spell[1]->sprite, d->spell[1]->rect);
            d->u.select_spell.s4 = 0;
        }
    }
}
