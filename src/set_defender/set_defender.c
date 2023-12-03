/*
** EPITECH PROJECT, 2022
** set_all.c
** File description:
** set_all
*/

#include "my_defender.h"

void set_button(defender_t *d)
{
    set_menu_button(d);
    set_shop_button(d);
    set_shop_button_two(d);
    set_shop_button_three(d);
    set_setting_button(d);
    set_lose_button(d);
    set_win_button(d);
    set_play_button(d);
    set_pause_button(d);
    set_help_button(d);
}

void set_struct_defender(defender_t *d)
{
    d->u.point = NONE;
    d->u.state = S_MENU;
    d->u.so.w_sound = 0;
    d->u.so.on_off = 0;
    d->u.so.go_music = 0;
    d->u.click_spell = 0;
    d->u.select_spell.s1 = 0;
    d->u.select_spell.s2 = 0;
    d->u.select_spell.s3 = 0;
    d->u.select_spell.s4 = 0;
    d->u.key.go = 0;
    d->u.key.go1 = 0;
    d->u.key.go2 = 0;
    d->u.key.go3 = 0;
    d->u.key.go4 = 0;
    d->u.key.go5 = 0;
    d->u.spell = 0;
    d->u.life.nbr_mobs_win = 0;
}

void set_defender(defender_t *d)
{
    set_struct_defender(d);
    set_window_clock(d);
    set_music(d);
    set_sprite(d);
    set_text(d);
    set_life_mobs(d);
}

void set_sprite(defender_t *d)
{
    set_background(d);
    set_button(d);
    set_point(d);
    set_towers(d);
    set_mob(d);
    set_spell(d);
    set_attack(d);
}
