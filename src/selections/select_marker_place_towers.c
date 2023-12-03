/*
** EPITECH PROJECT, 2022
** select_marker_place_towers.c
** File description:
** select_marker_place_towers
*/

#include "my_defender.h"

void point_gestion(defender_t *d)
{
    RED_C ? print_red(d) : 0;
    BLUE_C ? print_blue(d) : 0;
    YELLOW_C ? print_yellow(d) : 0;
    GREEN_C ? print_green(d) : 0;
}

void mouse_mark_tower(defender_t *d)
{
    if (d->u.no_t == 1) {
        d->u.point = NONE;
        return;
    }
    T_RED && ACTUAL_PLAY ? RED_MARK : 0;
    T_BLUE && ACTUAL_PLAY ? BLUE_MARK : 0;
    T_YELLOW && ACTUAL_PLAY ? YELLOW_MARK : 0;
    T_GREEN && ACTUAL_PLAY ? GREEN_MARK : 0;
}

void choice_where(defender_t *d)
{
    red_blue(d);
    green_yellow(d);
}

void mouse_click_on_mark(defender_t *d)
{
    ((COLORS) && (ACTUAL_PLAY)) ? choice_where(d) : 0;
}
