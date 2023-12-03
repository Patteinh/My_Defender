/*
** EPITECH PROJECT, 2022
** set_music.c
** File description:
** set_music
*/

#include "my_defender.h"

void set_music(defender_t *d)
{
    d->music = malloc(sizeof(music_t));

    d->music->menu = sfMusic_createFromFile(M_MENU);
    d->music->click = sfMusic_createFromFile(M_CLICK);
    d->music->ingame = sfMusic_createFromFile(M_INGAME);
    d->music->place_tower = sfMusic_createFromFile(M_PLACE_TOWER);
    d->music->start_game = sfMusic_createFromFile(M_START);
    d->music->fire_ball = sfMusic_createFromFile(M_FIREBALL);
    d->music->spell_acid = sfMusic_createFromFile(M_ACID);
    d->music->spell_fire = sfMusic_createFromFile(M_FIRE);
    d->music->spell_freeze = sfMusic_createFromFile(M_FREEZE);
    d->music->spell_lightning = sfMusic_createFromFile(M_LIGHTNING);
    d->music->win = sfMusic_createFromFile(M_WIN);
    d->music->lose = sfMusic_createFromFile(M_LOSE);
}
