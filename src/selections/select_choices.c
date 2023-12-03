/*
** EPITECH PROJECT, 2022
** selection_choices.c
** File description:
** selection_choices
*/

#include "my_defender.h"

void mouse_selection(defender_t *d)
{
    mouse_redirection(d);
    menu_on_off(d);
    setting_on_off(d);
}

void defender_selection(defender_t *d)
{
    mouse_selection(d);
    state_selection(d);
}
