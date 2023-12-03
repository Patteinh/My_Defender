/*
** EPITECH PROJECT, 2022
** set_window
** File description:
** set_window
*/

#include "my_defender.h"

void set_window_clock(defender_t *d)
{
    sfVideoMode video_mode = {1920, 1080, 32};

    d->window = sfRenderWindow_create(video_mode, T, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(d->window, 60);
    d->u.clock = sfClock_create();
}
