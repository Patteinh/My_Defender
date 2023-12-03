/*
** EPITECH PROJECT, 2022
** select_opt_two.c
** File description:
** select_opt_two
*/

#include "my_defender.h"

void go_play(defender_t *d)
{
    sfRenderWindow_drawSprite(d->window, d->background[1]->sprite, NULL);
    for (int i = 0; i != 24; i++) {
        sfSprite_setScale(d->p_b[i]->sprite, d->p_b[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->p_b[i]->sprite, NULL);
    }
    sfRenderWindow_drawText(d->window, d->text[4]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[6]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[7]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[24]->txt, NULL);
    if (d->u.starter == 1) {
        move_mobs(d);
        // sfRenderWindow_drawText(d->window, d->text[23]->txt, NULL);
    }
    mouse_mark_tower(d);
    point_gestion(d);
    mouse_click_on_mark(d);
    draw_towers(d);
    spell_gestion(d);
    life_money_gestion(d);
}

void go_shop(defender_t *d)
{
    sfRenderWindow_drawSprite(d->window, d->background[0]->sprite, NULL);
    for (int i = 0; i != 24; i++) {
        sfSprite_setScale(d->shop_button[i]->sprite, d->shop_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->shop_button[i]->sprite, NULL);
    }
    d->text[1] = create_text(FONT, (sfVector2f){605, 390}, "10 GEM", 80);
    for (int i = 1; i != 4; i++)
        sfRenderWindow_drawText(d->window, d->text[i]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[25]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[26]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[27]->txt, NULL);
}

void go_settings(defender_t *d)
{
    sfRenderWindow_drawSprite(d->window, d->background[0]->sprite, NULL);
    for (int i = 0; i != 10; i++) {
        sfSprite_setScale(d->set_button[i]->sprite, d->set_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->set_button[i]->sprite, NULL);
    }
    sfRenderWindow_drawText(d->window, d->text[5]->txt, NULL);
}

void go_menu(defender_t *d)
{
    sfRenderWindow_drawSprite(d->window, d->background[0]->sprite, NULL);
    for (int i = 0; i != 7; i++) {
        sfSprite_setScale(d->menu_button[i]->sprite, d->menu_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->menu_button[i]->sprite, NULL);
    }
    sfSprite_setScale(d->menu_button[8]->sprite, d->menu_button[8]->scale);
    sfRenderWindow_drawSprite(d->window, d->menu_button[8]->sprite, NULL);
    sfRenderWindow_drawText(d->window, d->text[0]->txt, NULL);
    sfRenderWindow_drawText(d->window, d->text[19]->txt, NULL);
    reset_utils(d);
}

void go_help(defender_t *d)
{
    for (int i = 0; i != 20; i++) {
        sfSprite_setScale(d->help_button[i]->sprite, d->help_button[i]->scale);
        sfRenderWindow_drawSprite(d->window, d->help_button[i]->sprite, NULL);
    }
    for (int i = 8; i <= 18; i++)
        sfRenderWindow_drawText(d->window, d->text[i]->txt, NULL);
}
