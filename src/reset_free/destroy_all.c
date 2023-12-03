/*
** EPITECH PROJECT, 2022
** destroy.c
** File description:
** destroy
*/

#include "my_defender.h"

void destroy_background_music(defender_t *d)
{
    for (int i = 0; i <= 1; i++)
        sfSprite_destroy(d->background[i]->sprite);
    sfMusic_destroy(d->music->click);
    sfMusic_destroy(d->music->fire_ball);
    sfMusic_destroy(d->music->ingame);
    sfMusic_destroy(d->music->lose);
    sfMusic_destroy(d->music->win);
    sfMusic_destroy(d->music->menu);
    sfMusic_destroy(d->music->place_tower);
    sfMusic_destroy(d->music->spell_acid);
    sfMusic_destroy(d->music->spell_fire);
    sfMusic_destroy(d->music->spell_freeze);
    sfMusic_destroy(d->music->spell_lightning);
    sfMusic_destroy(d->music->start_game);
}

void destroy_rest(defender_t *d)
{
    for (int i = 0; i <= 24; i++)
        sfSprite_destroy(d->attack[i]->sprite);
    for (int i = 0; i <= 12; i++)
        sfSprite_destroy(d->mob[i]->sprite);
}

void destroy_button(defender_t *d)
{
    for (int i = 0; i <= 23; i++)
        sfSprite_destroy(d->p_b[i]->sprite);
    for (int i = 0; i <= 8; i++)
        sfSprite_destroy(d->menu_button[i]->sprite);
    for (int i = 0; i <= 23; i++)
        sfSprite_destroy(d->shop_button[i]->sprite);
    for (int i = 0; i <= 9; i++)
        sfSprite_destroy(d->set_button[i]->sprite);
    for (int i = 0; i <= 6; i++)
        sfSprite_destroy(d->lose_button[i]->sprite);
    for (int i = 0; i <= 6; i++)
        sfSprite_destroy(d->win_button[i]->sprite);
    for (int i = 0; i <= 2; i++)
        sfSprite_destroy(d->pause_button[i]->sprite);
    for (int i = 0; i <= 19; i++)
        sfSprite_destroy(d->help_button[i]->sprite);
    for (int i = 0; i <= 3; i++)
        sfSprite_destroy(d->spell[i]->sprite);
}

void destroy_text(defender_t *d)
{
    for (int i = 0; i <= 24; i++)
        sfText_destroy(d->text[i]->txt);
    for (int i = 0; i <= 23; i++)
        sfText_destroy(d->point[i]->txt);
}

void destroy_all(defender_t *d)
{
    destroy_background_music(d);
    destroy_button(d);
    destroy_text(d);
    destroy_rest(d);
    sfClock_destroy(d->u.clock);
}
