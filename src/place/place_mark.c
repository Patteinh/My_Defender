/*
** EPITECH PROJECT, 2022
** place_mark.c
** File description:
** place_mark
*/

#include "my_defender.h"

void print_red(defender_t *d)
{
    d->u.p.p1 == 0 ? D1_R : 0;
    d->u.p.p2 == 0 ? D2_R : 0;
    d->u.p.p3 == 0 ? D3_R : 0;
    d->u.p.p4 == 0 ? D4_R : 0;
    d->u.p.p5 == 0 ? D5_R : 0;
    d->u.p.p6 == 0 ? D6_R : 0;
}

void print_blue(defender_t *d)
{
    d->u.p.p1 == 0 ? D1_B : 0;
    d->u.p.p2 == 0 ? D2_B : 0;
    d->u.p.p3 == 0 ? D3_B : 0;
    d->u.p.p4 == 0 ? D4_B : 0;
    d->u.p.p5 == 0 ? D5_B : 0;
    d->u.p.p6 == 0 ? D6_B : 0;
}

void print_yellow(defender_t *d)
{
    d->u.p.p1 == 0 ? D1_Y : 0;
    d->u.p.p2 == 0 ? D2_Y : 0;
    d->u.p.p3 == 0 ? D3_Y : 0;
    d->u.p.p4 == 0 ? D4_Y : 0;
    d->u.p.p5 == 0 ? D5_Y : 0;
    d->u.p.p6 == 0 ? D6_Y : 0;
}

void print_green(defender_t *d)
{
    d->u.p.p1 == 0 ? D1_G : 0;
    d->u.p.p2 == 0 ? D2_G : 0;
    d->u.p.p3 == 0 ? D3_G : 0;
    d->u.p.p4 == 0 ? D4_G : 0;
    d->u.p.p5 == 0 ? D5_G : 0;
    d->u.p.p6 == 0 ? D6_G : 0;
}
