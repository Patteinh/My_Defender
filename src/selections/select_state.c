/*
** EPITECH PROJECT, 2022
** select_opt.c
** File description:
** select_opt
*/

#include "my_defender.h"

void go_lose(defender_t *d)
{
    for (int i = 0; i != 7; i++) {
        sfSprite_setScale(d->lose_button[i]->sprite, d->lose_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->lose_button[i]->sprite, NULL);
    }
    sfText_setString(d->text[22]->txt, d->u.score_st);
    sfRenderWindow_drawText(d->window, d->text[22]->txt, NULL);
    d->u.starter = 0;
}

void go_win(defender_t *d)
{
    for (int i = 0; i != 7; i++) {
        sfSprite_setScale(d->win_button[i]->sprite, d->win_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->win_button[i]->sprite, NULL);
    }
    sfText_setString(d->text[21]->txt, d->u.score_st);
    sfRenderWindow_drawText(d->window, d->text[21]->txt, NULL);
    d->u.starter = 0;
}

void go_pause(defender_t *d)
{
    sfSprite_setScale(d->pause_button[0]->sprite, d->pause_button[0]->scale);
    sfRenderWindow_drawSprite(d->window, d->pause_button[0]->sprite, NULL);
    sfSprite_setScale(d->pause_button[1]->sprite, d->pause_button[1]->scale);
    sfRenderWindow_drawSprite(d->window, d->pause_button[1]->sprite, NULL);
    sfSprite_setScale(d->pause_button[2]->sprite, d->pause_button[2]->scale);
    sfRenderWindow_drawSprite(d->window, d->pause_button[2]->sprite, NULL);
    d->text[1] = create_text(FONT, (sfVector2f){700, 390}, "CONTINUE", 150);
    sfRenderWindow_drawText(d->window, d->text[1]->txt, NULL);
}
