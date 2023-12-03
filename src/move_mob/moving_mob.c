/*
** EPITECH PROJECT, 2022
** My_Defender
** File description:
** moving_mob
*/

#include "my_defender.h"

void move_mobs(defender_t *d)
{
    if (DEAD_GOB >= 0)
        LIFE_GOB > 0 ? move_e_gob_run(d) : move_e_gob_die(d);
    if (DEAD_SWORD >= 0)
        LIFE_SWORD > 0 ? move_e_sword_run(d) : move_e_sword_die(d);
    if (DEAD_HAXE >= 0)
        LIFE_HAXE > 0 ? move_e_haxe_run(d) : move_e_haxe_die(d);
    if (DEAD_RED >= 0)
        LIFE_RED > 0 ? move_e_red_run(d) : move_e_red_die(d);
    if (DEAD_GOL >= 0)
        LIFE_GOL > 0 ? move_e_gol_run(d) : move_e_gol_die(d);
    if (DEAD_VIK >= 0)
        LIFE_VIK > 0 ? move_e_vik_run(d) : move_e_vik_die(d);
}
