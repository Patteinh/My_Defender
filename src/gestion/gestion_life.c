/*
** EPITECH PROJECT, 2022
** life_gestion.c
** File description:
** life_gestion
*/

#include "my_defender.h"

void life_gestion(defender_t *d)
{
    if (d->u.life.nbr_mobs_win == 1) {
        d->p_b[5]->rect.width = 218.53;
        sfSprite_setTextureRect(d->p_b[5]->sprite, d->p_b[5]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[5]->sprite, NULL);
        sfText_setString(d->text[6]->txt, "2");
        sfRenderWindow_drawText(d->window, d->text[6]->txt, NULL);
    }
    if (d->u.life.nbr_mobs_win == 2) {
        d->p_b[5]->rect.width = 109.26;
        sfSprite_setTextureRect(d->p_b[5]->sprite, d->p_b[5]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[5]->sprite, NULL);
        sfText_setString(d->text[6]->txt, "1");
        sfRenderWindow_drawText(d->window, d->text[6]->txt, NULL);
    }
    life_gestion_two(d);
}

void life_gestion_two(defender_t *d)
{
    if (d->u.life.nbr_mobs_win == 3) {
        d->p_b[5]->rect.width = 0;
        sfSprite_setTextureRect(d->p_b[5]->sprite, d->p_b[5]->rect);
        sfRenderWindow_drawSprite(d->window, d->p_b[5]->sprite, NULL);
        sfText_setString(d->text[6]->txt, "0");
        sfRenderWindow_drawText(d->window, d->text[6]->txt, NULL);
        d->u.state = S_LOSE;
        sfMusic_stop(d->music->lose);
        sfMusic_play(d->music->lose);
    }
    if (d->u.life.nbr_mobs_win == 2 && d->u.kill == 4) {
        d->u.state = S_WIN;
        WIN_SP;
    }
    if (d->u.life.nbr_mobs_win == 1 && d->u.kill == 5) {
        d->u.state = S_WIN;
        WIN_SP;
    }
}
