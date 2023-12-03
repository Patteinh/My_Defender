/*
** EPITECH PROJECT, 2022
** select_music.c
** File description:
** select_music
*/

#include "my_defender.h"

void go_music_menu(defender_t *d)
{
    sfMusic_stop(d->music->ingame);
    sfMusic_play(d->music->menu);
    sfMusic_setLoop(d->music->menu, sfTrue);
    d->u.so.w_sound = 50;
}

void go_music_play(defender_t *d)
{
    sfMusic_stop(d->music->menu);
    sfMusic_play(d->music->ingame);
    sfMusic_setLoop(d->music->ingame, sfTrue);
    d->u.so.w_sound = 50;
}

void select_music(defender_t *d)
{
    d->u.so.w_sound == 0 ? go_music_menu(d) : 0;
    d->u.so.w_sound == 1 ? go_music_play(d) : 0;
}

void menu_on_off(defender_t *d)
{
    if (MUSIC_ON && MUSIC && ACTUAL_MENU) {
        GO_NO_SOUND;
        sfMusic_setVolume(d->music->menu, 0);
        sfMusic_setVolume(d->music->ingame, 0);
        d->menu_button[6] = create_sprite_b_menu(B_MOFF, (sfVector2f){20, 22},
        (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.9, 0.9});
        sfRenderWindow_drawSprite(d->window, d->menu_button[6]->sprite, NULL);
    } else if (MUSIC_OFF && MUSIC && ACTUAL_MENU) {
        GO_SOUND;
        sfMusic_setVolume(d->music->menu, 100);
        sfMusic_setVolume(d->music->ingame, 100);
        d->menu_button[6] = create_sprite_b_menu(B_MON, (sfVector2f){20, 22},
        (sfIntRect){0, 0, 176, 175}, (sfVector2f){0.9, 0.9});
        sfRenderWindow_drawSprite(d->window, d->menu_button[6]->sprite, NULL);
    }
}

void setting_on_off(defender_t *d)
{
    if (ONOFF && ACTUAL_SET && MUSIC_ON) {
        GO_NO_SOUND;
        sfMusic_setVolume(d->music->menu, 0);
        sfMusic_setVolume(d->music->ingame, 0);
        d->set_button[7] = create_sprite_b_setting(B_OFF, P_SETTING,
        (sfIntRect){0, 0, 131, 63}, (sfVector2f){1, 1});
        sfRenderWindow_drawSprite(d->window, d->set_button[6]->sprite, NULL);
    } else if (ONOFF && ACTUAL_SET && MUSIC_OFF) {
        GO_SOUND;
        sfMusic_setVolume(d->music->menu, 100);
        sfMusic_setVolume(d->music->ingame, 100);
        d->set_button[7] = create_sprite_b_setting(B_ON, P_SETTING,
        (sfIntRect){0, 0, 131, 63}, (sfVector2f){1, 1});
        sfRenderWindow_drawSprite(d->window, d->set_button[6]->sprite, NULL);
    }
}
