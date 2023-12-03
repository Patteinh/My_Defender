/*
** EPITECH PROJECT, 2022
** gestion_money_three.c
** File description:
** gestion_money_three
*/

#include "my_defender.h"

void money_gestion_seven(defender_t *d)
{
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K2T2) {
        d->p_b[3]->rect.width = 327;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "10");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("10", sfText_getString(d->text[7]->txt)) && K3T3) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_eight(defender_t *d)
{
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K3T4) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_nine(defender_t *d)
{
    if (!my_strcmp("10", sfText_getString(d->text[7]->txt)) && K3T3) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K3T4) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}
