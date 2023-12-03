/*
** EPITECH PROJECT, 2022
** free_all.c
** File description:
** free_all
*/

#include "my_defender.h"

void free_background(defender_t *d)
{
    for (int i = 0; i <= 1; i++)
        free(d->background[i]);
}

void free_rest(defender_t *d)
{
    for (int i = 0; i <= 24; i++)
        free(d->attack[i]);
    for (int i = 0; i <= 12; i++)
        free(d->mob[i]);
    free(d->u.s.bleu);
    free(d->u.s.green);
    free(d->u.s.yellow);
    free(d->u.s.red);
}

void free_button(defender_t *d)
{
    for (int i = 0; i <= 23; i++)
        free(d->p_b[i]);
    for (int i = 0; i <= 8; i++)
        free(d->menu_button[i]);
    for (int i = 0; i <= 23; i++)
        free(d->shop_button[i]);
    for (int i = 0; i <= 9; i++)
        free(d->set_button[i]);
    for (int i = 0; i <= 6; i++)
        free(d->lose_button[i]);
    for (int i = 0; i <= 6; i++)
        free(d->win_button[i]);
    for (int i = 0; i <= 2; i++)
        free(d->pause_button[i]);
    for (int i = 0; i <= 19; i++)
        free(d->help_button[i]);
    for (int i = 0; i <= 3; i++)
        free(d->spell[i]);
}

void free_text(defender_t *d)
{
    for (int i = 0; i <= 27; i++)
        free(d->text[i]);
    for (int i = 0; i <= 23; i++)
        free(d->point[i]);
}

void free_all(defender_t *d)
{
    free_background(d);
    free_button(d);
    free_text(d);
    free_rest(d);
    free(d->towers.blue);
    free(d->towers.green);
    free(d->towers.yellow);
    free(d->towers.red);
    free(d);
}
