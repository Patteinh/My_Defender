/*
** EPITECH PROJECT, 2022
** set_mouse.c
** File description:
** set_mouse
*/

#include "my_defender.h"

void set_mouse_pos(defender_t *d)
{
    d->mouse.pos = sfMouse_getPositionRenderWindow(d->window);
}
