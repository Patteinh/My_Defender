/*
** EPITECH PROJECT, 2022
** select_where.c
** File description:
** select_where
*/

#include "my_defender.h"

void red_blue(defender_t *d)
{
    PLACE_ONE_R ? d->u.p.p1 = 1, SONG_T,  d->u.cpt.red.p1 = 1 : 0;
    PLACE_TWO_R ? d->u.p.p2 = 1,  SONG_T,  d->u.cpt.red.p2 = 1 : 0;
    PLACE_THREE_R ? d->u.p.p3 = 1, SONG_T,  d->u.cpt.red.p3 = 1 : 0;
    PLACE_FOUR_R ? d->u.p.p4 = 1,  SONG_T,  d->u.cpt.red.p4 = 1 : 0;
    PLACE_FIVE_R ? d->u.p.p5 = 1,  SONG_T,  d->u.cpt.red.p5 = 1 : 0;
    PLACE_SIX_R ? d->u.p.p6 = 1,  SONG_T,  d->u.cpt.red.p6 = 1 : 0;
    PLACE_ONE_B ? d->u.p.p1 = 1, SONG_T,  d->u.cpt.blue.p1 = 1 : 0;
    PLACE_TWO_B ? d->u.p.p2 = 1,  SONG_T,  d->u.cpt.blue.p2 = 1 : 0;
    PLACE_THREE_B ? d->u.p.p3 = 1, SONG_T,  d->u.cpt.blue.p3 = 1 : 0;
    PLACE_FOUR_B ? d->u.p.p4 = 1,  SONG_T,  d->u.cpt.blue.p4 = 1 : 0;
    PLACE_FIVE_B ? d->u.p.p5 = 1,  SONG_T,  d->u.cpt.blue.p5 = 1 : 0;
    PLACE_SIX_B ? d->u.p.p6 = 1,  SONG_T,  d->u.cpt.blue.p6 = 1 : 0;
}

void green_yellow(defender_t *d)
{
    PLACE_ONE_G ? d->u.p.p1 = 1, SONG_T, d->u.cpt.green.p1 = 1 : 0;
    PLACE_TWO_G ? d->u.p.p2 = 1,  SONG_T, d->u.cpt.green.p2 = 1 : 0;
    PLACE_THREE_G ? d->u.p.p3 = 1, SONG_T,  d->u.cpt.green.p3 = 1 : 0;
    PLACE_FOUR_G ? d->u.p.p4 = 1,  SONG_T,  d->u.cpt.green.p4 = 1 : 0;
    PLACE_FIVE_G ? d->u.p.p5 = 1,  SONG_T,  d->u.cpt.green.p5 = 1 : 0;
    PLACE_SIX_G ? d->u.p.p6 = 1,  SONG_T,  d->u.cpt.green.p6 = 1 : 0;
    PLACE_ONE_YE ? d->u.p.p1 = 1, SONG_T,  d->u.cpt.yellow.p1 = 1 : 0;
    PLACE_TWO_YE ? d->u.p.p2 = 1,  SONG_T,  d->u.cpt.yellow.p2 = 1 : 0;
    PLACE_THREE_YE ? d->u.p.p3 = 1, SONG_T,  d->u.cpt.yellow.p3 = 1 : 0;
    PLACE_FOUR_YE ? d->u.p.p4 = 1,  SONG_T,  d->u.cpt.yellow.p4 = 1 : 0;
    PLACE_FIVE_YE ? d->u.p.p5 = 1,  SONG_T,  d->u.cpt.yellow.p5 = 1 : 0;
    PLACE_SIX_YE ? d->u.p.p6 = 1,  SONG_T,  d->u.cpt.yellow.p6 = 1 : 0;
}
