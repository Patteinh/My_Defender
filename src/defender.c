/*
** EPITECH PROJECT, 2022
** defender.c
** File description:
** defender
*/

#include "my_defender.h"

void my_clock(defender_t *d)
{
    d->u.time = sfClock_getElapsedTime(d->u.clock);
    d->u.sec = d->u.time.microseconds / 1000000.0;
}

void pause_event(defender_t *d)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        d->u.state = 4;
        return;
    }
}

void check_event(defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->window, &(d->event))) {
        if (d->event.type == sfEvtClosed)
            sfRenderWindow_close(d->window);
        if (d->event.type == sfEvtKeyPressed)
            pause_event(d);
    }
}

int defender(void)
{
    defender_t *d = malloc(sizeof(defender_t));

    set_defender(d);
    while (sfRenderWindow_isOpen(d->window)) {
        // score(d);
        select_music(d);
        check_event(d);
        my_clock(d);
        set_mouse_pos(d);
        if (d->event.type == sfEvtMouseButtonPressed)
            printf("x = %d, y = %d\n", d->mouse.pos.x, d->mouse.pos.y);
        defender_selection(d);
        sfRenderWindow_display(d->window);
    }
    sfRenderWindow_destroy(d->window);
    free_all(d);
    return (0);
}
