/*
** EPITECH PROJECT, 2022
** select_spell.c
** File description:
** select_spell
*/

#include "my_defender.h"

void drop_spell_song(defender_t *d)
{
    if (d->u.click_spell == 1 && d->event.type == sfEvtMouseButtonReleased &&
    (d->mouse.pos.x < 11 || d->mouse.pos.x > 630 ||
    d->mouse.pos.y < 945 || d->mouse.pos.y > 1045)) {
        sfMusic_stop(d->music->spell_fire);
        sfMusic_play(d->music->spell_fire);
        d->u.select_spell.s1 = 1;
        d->event.type = 0;
        d->u.click_spell = 0;
        return;
    }
    if (d->u.click_spell == 2 && d->event.type == sfEvtMouseButtonReleased &&
    (d->mouse.pos.x < 11 || d->mouse.pos.x > 630 || d->mouse.pos.y < 945 ||
    d->mouse.pos.y > 1045)) {
        sfMusic_stop(d->music->spell_freeze);
        sfMusic_play(d->music->spell_freeze);
        d->u.select_spell.s4 = 1;
        d->event.type = 0;
        d->u.click_spell = 0;
        return;
    }
}

void drop_spell_song_two(defender_t *d)
{
    if (d->u.click_spell == 3 && d->event.type == sfEvtMouseButtonReleased &&
    (d->mouse.pos.x < 11 || d->mouse.pos.x > 630 ||
    d->mouse.pos.y < 945 || d->mouse.pos.y > 1045)) {
        sfMusic_stop(d->music->spell_lightning);
        sfMusic_play(d->music->spell_lightning);
        d->u.select_spell.s3 = 1;
        d->event.type = 0;
        d->u.click_spell = 0;
        return;
    }
    if (d->u.click_spell == 4 && d->event.type == sfEvtMouseButtonReleased &&
    (d->mouse.pos.x < 11 || d->mouse.pos.x > 630 ||
    d->mouse.pos.y < 945 || d->mouse.pos.y > 1045)) {
        sfMusic_stop(d->music->spell_acid);
        sfMusic_play(d->music->spell_acid);
        d->u.select_spell.s2 = 1;
        d->event.type = 0;
        d->u.click_spell = 0;
        return;
    }
}

void spell_preview(defender_t *d)
{
    if (d->u.click_spell == 1) {
        d->spell[0]->pos.x = d->mouse.pos.x - 100;
        d->spell[0]->pos.y = d->mouse.pos.y - 100;
        sfSprite_setPosition(d->spell[0]->sprite, d->spell[0]->pos);
        sfRenderWindow_drawSprite(d->window, d->spell[0]->sprite, NULL);
    }
    if (d->u.click_spell == 2) {
        d->spell[1]->pos.x = d->mouse.pos.x - 100;
        d->spell[1]->pos.y = d->mouse.pos.y - 100;
        sfSprite_setPosition(d->spell[1]->sprite, d->spell[1]->pos);
        sfRenderWindow_drawSprite(d->window, d->spell[1]->sprite, NULL);
    }
    spell_preview_two(d);
}

void spell_preview_two(defender_t *d)
{
    if (d->u.click_spell == 3) {
        d->spell[2]->pos.x = d->mouse.pos.x - 100;
        d->spell[2]->pos.y = d->mouse.pos.y - 100;
        sfSprite_setPosition(d->spell[2]->sprite, d->spell[2]->pos);
        sfRenderWindow_drawSprite(d->window, d->spell[2]->sprite, NULL);
    }
    if (d->u.click_spell == 4) {
        d->spell[3]->pos.x = d->mouse.pos.x - 100;
        d->spell[3]->pos.y = d->mouse.pos.y - 100;
        sfSprite_setPosition(d->spell[3]->sprite, d->spell[3]->pos);
        sfRenderWindow_drawSprite(d->window, d->spell[3]->sprite, NULL);
    }
}

void spell_gestion(defender_t *d)
{
    SPELL_FIRE ? d->u.click_spell = 1 : 0;
    SPELL_FROZ ? d->u.click_spell = 2 : 0;
    SPELL_LI ? d->u.click_spell = 3 : 0;
    SPELL_ACID ? d->u.click_spell = 4 : 0;
    spell_preview(d);
    // if (d->u.click_spell >= 1 &&
    //     d->event.type == sfEvtMouseButtonReleased &&
    //     d->mouse.pos.x >= 11 && d->mouse.pos.x <= 630 &&
    //     d->mouse.pos.y >= 945 && d->mouse.pos.y <= 1045) {
    //     kill_mobs(d);
    //     d->event.type = 0;
    //     d->u.click_spell = 0;
    //     return;
    // }
    drop_spell_song(d);
    drop_spell_song_two(d);
    disp_spell_one(d);
    disp_spell_two(d);
    disp_spell_three(d);
    disp_spell_four(d);
}
