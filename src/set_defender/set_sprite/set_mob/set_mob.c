/*
** EPITECH PROJECT, 2022
** set_mob
** File description:
** set_mob
*/

#include "my_defender.h"

void set_mob(defender_t *d)
{
    for (int i = 0; i != 12; i++)
        d->mob[i] = NULL;
    d->mob[0] = create_sprite_mob(E_SWORD_RUN, (sfVector2f){1, 710},
    (sfIntRect){0, 0, 445, 420}, (sfVector2f){0.35, 0.35});
    d->mob[1] = create_sprite_mob(E_SWORD_DIE, (sfVector2f){70, 710},
    (sfIntRect){0, 0, 445, 420}, (sfVector2f){0.35, 0.35});
    d->mob[2] = create_sprite_mob(E_GOB_RUN, (sfVector2f){1, 717},
    (sfIntRect){0, 0, 301, 256}, (sfVector2f){0.4, 0.4});
    d->mob[3] = create_sprite_mob(E_GOB_DIE, (sfVector2f){70, 1},
    (sfIntRect){0, 0, 301, 256}, (sfVector2f){0.4, 0.4});
    d->mob[4] = create_sprite_mob(E_HAXE_RUN, (sfVector2f){-80, 710},
    (sfIntRect){0, 0, 380, 332}, (sfVector2f){0.35, 0.35});
    d->mob[5] = create_sprite_mob(E_HAXE_DIE, (sfVector2f){70, 100},
    (sfIntRect){0, 0, 380, 332}, (sfVector2f){0.35, 0.35});
    set_mob_two(d);
}

void set_mob_two(defender_t *d)
{
    d->mob[6] = create_sprite_mob(E_RED_RUN, (sfVector2f){-100, 760},
    (sfIntRect){0, 0, 280, 275}, (sfVector2f){0.4, 0.4});
    d->mob[7] = create_sprite_mob(E_RED_DIE, (sfVector2f){70, 300},
    (sfIntRect){0, 0, 280, 275}, (sfVector2f){0.4, 0.4});
    d->mob[8] = create_sprite_mob(E_VIK_RUN, (sfVector2f){-160, 770},
    (sfIntRect){0, 0, 264, 255}, (sfVector2f){0.4, 0.4});
    d->mob[9] = create_sprite_mob(E_VIK_DIE, (sfVector2f){70, 500},
    (sfIntRect){0, 0, 264, 255}, (sfVector2f){0.4, 0.4});
    d->mob[10] = create_sprite_mob(E_GOL_RUN, (sfVector2f){-140, 730},
    (sfIntRect){0, 0, 324, 293}, (sfVector2f){0.35, 0.35});
    d->mob[11] = create_sprite_mob(E_GOL_DIE, (sfVector2f){-140, 700},
    (sfIntRect){0, 0, 324, 293}, (sfVector2f){0.4, 0.4});
}

void set_life_mobs(defender_t *d)
{
    LIFE_GOB = 4;
    LIFE_SWORD = 6;
    LIFE_HAXE = 4;
    LIFE_RED = 2;
    LIFE_GOL = 4;
    LIFE_VIK = 5;
    DEAD_GOB = 0;
    DEAD_SWORD = 0;
    DEAD_HAXE = 0;
    DEAD_RED = 0;
    DEAD_GOL = 0;
    DEAD_VIK = 0;
    d->u.score = 0;
}
