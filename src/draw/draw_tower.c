/*
** EPITECH PROJECT, 2022
** draw_tower.c
** File description:
** draw_tower
*/

#include "my_defender.h"

void draw_red(defender_t *d)
{
    d->u.cpt.red.p1 == 1 ? place_red(d, 0) : 0;
    d->u.cpt.red.p2 == 1 ? place_red(d, 1) : 0;
    d->u.cpt.red.p3 == 1 ? place_red(d, 2) : 0;
    d->u.cpt.red.p4 == 1 ? place_red(d, 3) : 0;
    d->u.cpt.red.p5 == 1 ? place_red(d, 4) : 0;
    d->u.cpt.red.p6 == 1 ? place_red(d, 5) : 0;
}

void draw_blue(defender_t *d)
{
    d->u.cpt.blue.p1 == 1 ? place_blue(d, 0) : 0;
    d->u.cpt.blue.p2 == 1 ? place_blue(d, 1) : 0;
    d->u.cpt.blue.p3 == 1 ? place_blue(d, 2) : 0;
    d->u.cpt.blue.p4 == 1 ? place_blue(d, 3) : 0;
    d->u.cpt.blue.p5 == 1 ? place_blue(d, 4) : 0;
    d->u.cpt.blue.p6 == 1 ? place_blue(d, 5) : 0;
}

void draw_green(defender_t *d)
{
    d->u.cpt.green.p1 == 1 ? place_green(d, 0) : 0;
    d->u.cpt.green.p2 == 1 ? place_green(d, 1) : 0;
    d->u.cpt.green.p3 == 1 ? place_green(d, 2) : 0;
    d->u.cpt.green.p4 == 1 ? place_green(d, 3) : 0;
    d->u.cpt.green.p5 == 1 ? place_green(d, 4) : 0;
    d->u.cpt.green.p6 == 1 ? place_green(d, 5) : 0;
}

void draw_yellow(defender_t *d)
{
    d->u.cpt.yellow.p1 == 1 ? place_yellow(d, 0) : 0;
    d->u.cpt.yellow.p2 == 1 ? place_yellow(d, 1) : 0;
    d->u.cpt.yellow.p3 == 1 ? place_yellow(d, 2) : 0;
    d->u.cpt.yellow.p4 == 1 ? place_yellow(d, 3) : 0;
    d->u.cpt.yellow.p5 == 1 ? place_yellow(d, 4) : 0;
    d->u.cpt.yellow.p6 == 1 ? place_yellow(d, 5) : 0;
}

void draw_towers(defender_t *d)
{
    draw_red(d);
    draw_blue(d);
    draw_green(d);
    draw_yellow(d);
    sfSprite_setPosition(d->towers.house[0].sprite, d->towers.house[0].pos);
    sfSprite_setScale(d->towers.house[0].sprite, d->towers.house[0].scale);
    sfRenderWindow_drawSprite(d->window, d->towers.house[0].sprite, NULL);
}
