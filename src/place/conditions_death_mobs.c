/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** conditions_death_mobs
*/

#include "my_defender.h"

void place_red(defender_t *d, int place)
{
    sfRenderWindow_drawSprite(d->window, d->towers.red[place].sprite, NULL);
    d->u.s.red->st1 > 0 && place == 0 ?
    d->u.s.red->st1 = disp_attack_one(d, d->u.s.red->st1), LAZ : 0;
    d->u.s.red->st2 > 0 && place == 1 ?
    d->u.s.red->st2 = disp_attack_two(d, d->u.s.red->st2), LAZ : 0;
    d->u.s.red->st3 > 0 && place == 2 ?
    d->u.s.red->st3 = disp_attack_three(d, d->u.s.red->st3), LAZ : 0;
    d->u.s.red->st4 > 0 && place == 3 ?
    d->u.s.red->st4 = disp_attack_four(d, d->u.s.red->st4), LAZ : 0;
    d->u.s.red->st5 > 0 && place == 4 ?
    d->u.s.red->st5 = disp_attack_five(d, d->u.s.red->st5), LAZ : 0;
    d->u.s.red->st6 > 0 && place == 5 ?
    d->u.s.red->st6 = disp_attack_six(d, d->u.s.red->st6), LAZ : 0;
}

void place_blue(defender_t *d, int place)
{
    sfRenderWindow_drawSprite(d->window, d->towers.blue[place].sprite, NULL);
    d->u.s.bleu->st1 > 0 && place == 0 ?
    d->u.s.bleu->st1 = disp_attack_one(d, d->u.s.bleu->st1), LAZ : 0;
    d->u.s.bleu->st2 > 0 && place == 1 ?
    d->u.s.bleu->st2 = disp_attack_two(d, d->u.s.bleu->st2), LAZ : 0;
    d->u.s.bleu->st3 > 0 && place == 2 ?
    d->u.s.bleu->st3 = disp_attack_three(d, d->u.s.bleu->st3), LAZ : 0;
    d->u.s.bleu->st4 > 0 && place == 3 ?
    d->u.s.bleu->st4 = disp_attack_four(d, d->u.s.bleu->st4), LAZ : 0;
    d->u.s.bleu->st5 > 0 && place == 4 ?
    d->u.s.bleu->st5 = disp_attack_five(d, d->u.s.bleu->st5), LAZ : 0;
    d->u.s.bleu->st6 > 0 && place == 5 ?
    d->u.s.bleu->st6 = disp_attack_six(d, d->u.s.bleu->st6), LAZ : 0;
}

void place_green(defender_t *d, int place)
{
    sfRenderWindow_drawSprite(d->window, d->towers.green[place].sprite, NULL);
    d->u.s.green->st1 > 0 && place == 0 ?
    d->u.s.green->st1 = disp_attack_one(d, d->u.s.green->st1), LAZ : 0;
    d->u.s.green->st2 > 0 && place == 1 ?
    d->u.s.green->st2 = disp_attack_two(d, d->u.s.green->st2), LAZ : 0;
    d->u.s.green->st3 > 0 && place == 2 ?
    d->u.s.green->st3 = disp_attack_three(d, d->u.s.green->st3), LAZ : 0;
    d->u.s.green->st4 > 0 && place == 3 ?
    d->u.s.green->st4 = disp_attack_four(d, d->u.s.green->st4), LAZ : 0;
    d->u.s.green->st5 > 0 && place == 4 ?
    d->u.s.green->st5 = disp_attack_five(d, d->u.s.green->st5), LAZ : 0;
    d->u.s.green->st6 > 0 && place == 5 ?
    d->u.s.green->st6 = disp_attack_six(d, d->u.s.green->st6), LAZ : 0;
}

void place_yellow(defender_t *d, int place)
{
    sfRenderWindow_drawSprite(d->window, d->towers.yellow[place].sprite, NULL);
    d->u.s.yellow->st1 > 0 && place == 0 ?
    d->u.s.yellow->st1 = disp_attack_one(d, d->u.s.yellow->st1), LAZ : 0;
    d->u.s.yellow->st2 > 0 && place == 1 ?
    d->u.s.yellow->st2 = disp_attack_two(d, d->u.s.yellow->st2), LAZ : 0;
    d->u.s.yellow->st3 > 0 && place == 2 ?
    d->u.s.yellow->st3 = disp_attack_three(d, d->u.s.yellow->st3), LAZ : 0;
    d->u.s.yellow->st4 > 0 && place == 3 ?
    d->u.s.yellow->st4 = disp_attack_four(d, d->u.s.yellow->st4), LAZ : 0;
    d->u.s.yellow->st5 > 0 && place == 4 ?
    d->u.s.yellow->st5 = disp_attack_five(d, d->u.s.yellow->st5), LAZ : 0;
    d->u.s.yellow->st6 > 0 && place == 5 ?
    d->u.s.yellow->st6 = disp_attack_six(d, d->u.s.yellow->st6), LAZ : 0;
}

void kill_mobs(defender_t *d)
{
    int var_rand = rand() % 6 + 1;

    ((var_rand == 1) && (GOB_M == 0)) ? LIFE_GOB = 0, CHANGE : 0;
    ((var_rand == 2) && (SWORD_M == 0)) ? LIFE_SWORD = 0, CHANGE : 0;
    ((var_rand == 3) && (HAXE_M == 0)) ? LIFE_HAXE = 0, CHANGE : 0;
    ((var_rand == 4) && (RED_M == 0)) ? LIFE_RED = 0, CHANGE : 0;
    ((var_rand == 5) && (GOL_M == 0)) ? LIFE_GOL = 0, CHANGE : 0;
    ((var_rand == 6) && (VIK_M == 0)) ? LIFE_VIK = 0, CHANGE : 0;
    ALL_MOB == 0 ? d->u.score += 500, d->u.state = 5, WIN_SP : 0;
}
