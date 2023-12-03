/*
** EPITECH PROJECT, 2022
** reset_defender.c
** File description:
** reset_defender
*/

#include "my_defender.h"

void reset_pos(defender_t *d)
{
    d->u.key.go = 0;
    d->u.key.go1 = 0;
    d->u.key.go2 = 0;
    d->u.key.go3 = 0;
    d->u.key.go4 = 0;
    d->u.key.go5 = 0;
}

void reset_sprite(defender_t *d)
{
    d->p_b[3]->rect.width = 327;
    sfSprite_setTextureRect(d->p_b[3]->sprite, d->p_b[3]->rect);
    sfText_setString(d->text[7]->txt, "10");
    d->p_b[5] = create_sprite_b_ingame(B_LIFE, (sfVector2f){97, 204},
    (sfIntRect){0, 0, 327.8, 30}, (sfVector2f){0.9, 0.9});
    d->text[6] = create_text(FONT, (sfVector2f){220, 110}, "3", 75);
    set_mob(d);
    set_life_mobs(d);
    reset_pos(d);
}

void reset_red_blue(defender_t *d)
{
    d->u.cpt.red.p1 = 0;
    d->u.cpt.red.p2 = 0;
    d->u.cpt.red.p3 = 0;
    d->u.cpt.red.p4 = 0;
    d->u.cpt.red.p5 = 0;
    d->u.cpt.red.p6 = 0;
    d->u.cpt.blue.p1 = 0;
    d->u.cpt.blue.p2 = 0;
    d->u.cpt.blue.p3 = 0;
    d->u.cpt.blue.p4 = 0;
    d->u.cpt.blue.p5 = 0;
    d->u.cpt.blue.p6 = 0;
}

void reset_green_yellow(defender_t *d)
{
    d->u.cpt.green.p1 = 0;
    d->u.cpt.green.p2 = 0;
    d->u.cpt.green.p3 = 0;
    d->u.cpt.green.p4 = 0;
    d->u.cpt.green.p5 = 0;
    d->u.cpt.green.p6 = 0;
    d->u.cpt.yellow.p1 = 0;
    d->u.cpt.yellow.p2 = 0;
    d->u.cpt.yellow.p3 = 0;
    d->u.cpt.yellow.p4 = 0;
    d->u.cpt.yellow.p5 = 0;
    d->u.cpt.yellow.p6 = 0;
}

void reset_utils(defender_t *d)
{
    d->u.no_t = 0;
    d->u.starter = 0;
    d->u.p.p1 = 0;
    d->u.p.p2 = 0;
    d->u.p.p3 = 0;
    d->u.p.p4 = 0;
    d->u.p.p5 = 0;
    d->u.p.p6 = 0;
    d->u.point = NONE;
    d->u.score = 0;
    d->u.life.nbr_mobs_win = 0;
    d->u.kill = 0;
    reset_red_blue(d);
    reset_green_yellow(d);
    reset_sprite(d);
    set_towers_attack(d);
}
