/*
** EPITECH PROJECT, 2022
** money_gestion.c
** File description:
** money_gestion
*/

#include "my_defender.h"

void money_gestion_two(defender_t *d)
{
    if (!my_strcmp("0", sfText_getString(d->text[7]->txt)) && K3T4) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("0", sfText_getString(d->text[7]->txt)) && K4T5) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_three(defender_t *d)
{
    if (!my_strcmp("0", sfText_getString(d->text[7]->txt)) && K2T3) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K2T4) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_four(defender_t *d)
{
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K2T4) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K4T6) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_five(defender_t *d)
{
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K3T5) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("5", sfText_getString(d->text[7]->txt)) && K1T3) {
        d->p_b[3]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}

void money_gestion_six(defender_t *d)
{
    if (!my_strcmp("10", sfText_getString(d->text[7]->txt)) && K2T3) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
    if (!my_strcmp("0", sfText_getString(d->text[7]->txt)) && K1T2) {
        d->p_b[3]->rect.width = 164;
        sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[3]->sprite, NULL);
        sfText_setString(d->text[7]->txt, "5");
        sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
        d->u.no_t = 0;
        return;
    }
}
