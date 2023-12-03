/*
** EPITECH PROJECT, 2022
** gestion_money
** File description:
** gestion_money
*/

#include "my_defender.h"

void money_starter(defender_t *d)
{
    if (NB_TOWER == 1) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
    }
    if (NB_TOWER == 2) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
    }
}

void money_gestion(defender_t *d)
{
    if (!my_strcmp("0", sfText_getString(d->text[7]->txt)))
        d->u.no_t = 1;
    if (d->u.starter == 0)
        money_starter(d);
    money_gestion_two(d);
    money_gestion_three(d);
    money_gestion_four(d);
    money_gestion_five(d);
    money_gestion_six(d);
}
