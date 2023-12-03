/*
** EPITECH PROJECT, 2022
** set_towers_attacks.c
** File description:
** set_towers_attack
*/

#include "my_defender.h"

void set_attack(defender_t *d)
{
    for (int i = 0; i != 25; i++)
        d->attack[i] = NULL;
    d->attack[0] = create_sprite_attack(Y_ATTACK, (sfVector2f){100, 420},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[1] = create_sprite_attack(Y_ATTACK, (sfVector2f){330, 600},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[2] = create_sprite_attack(Y_ATTACK, (sfVector2f){150, 850},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[3] = create_sprite_attack(Y_ATTACK, (sfVector2f){-70, 650},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[4] = create_sprite_attack(Y_ATTACK, (sfVector2f){500, 390},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[5] = create_sprite_attack(Y_ATTACK, (sfVector2f){730, 580},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[6] = create_sprite_attack(Y_ATTACK, (sfVector2f){560, 810},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[7] = create_sprite_attack(Y_ATTACK, (sfVector2f){340, 610},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    set_attack_two(d);
}

void set_attack_two(defender_t *d)
{
    d->attack[8] = create_sprite_attack(Y_ATTACK, (sfVector2f){850, 30},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[9] = create_sprite_attack(Y_ATTACK, (sfVector2f){1080, 210},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[10] = create_sprite_attack(Y_ATTACK, (sfVector2f){900, 460},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[11] = create_sprite_attack(Y_ATTACK, (sfVector2f){680, 260},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[12] = create_sprite_attack(Y_ATTACK, (sfVector2f){1540, 60},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[13] = create_sprite_attack(Y_ATTACK, (sfVector2f){1770, 240},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[14] = create_sprite_attack(Y_ATTACK, (sfVector2f){1590, 500},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[15] = create_sprite_attack(Y_ATTACK, (sfVector2f){1360, 300},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    set_attack_three(d);
}

void set_attack_three(defender_t *d)
{
    d->attack[16] = create_sprite_attack(Y_ATTACK, (sfVector2f){1200, 330},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[17] = create_sprite_attack(Y_ATTACK, (sfVector2f){1430, 510},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[18] = create_sprite_attack(Y_ATTACK, (sfVector2f){1250, 760},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[19] = create_sprite_attack(Y_ATTACK, (sfVector2f){1030, 560},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[20] = create_sprite_attack(Y_ATTACK, (sfVector2f){1620, 390},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[21] = create_sprite_attack(Y_ATTACK, (sfVector2f){1840, 580},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[22] = create_sprite_attack(Y_ATTACK, (sfVector2f){1670, 820},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[23] = create_sprite_attack(Y_ATTACK, (sfVector2f){1450, 650},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    d->attack[24] = create_sprite_attack(Y_ATTACK, (sfVector2f){1560, 520},
    (sfIntRect){0, 0, 42, 138}, (sfVector2f){0.6, 0.6});
    set_towers_attack(d);
}

void set_towers_attack(defender_t *d)
{
    d->u.s.bleu = malloc(sizeof(shoot_colors_b_t) * 6);
    d->u.s.bleu->st1 = 1;
    d->u.s.bleu->st2 = 1;
    d->u.s.bleu->st3 = 1;
    d->u.s.bleu->st4 = 1;
    d->u.s.bleu->st5 = 1;
    d->u.s.bleu->st6 = 1;
    d->u.s.green = malloc(sizeof(shoot_colors_g_t) * 6);
    d->u.s.green->st1 = 2;
    d->u.s.green->st2 = 2;
    d->u.s.green->st3 = 2;
    d->u.s.green->st4 = 2;
    d->u.s.green->st5 = 2;
    d->u.s.green->st6 = 2;
    set_towers_attack_two(d);
}

void set_towers_attack_two(defender_t *d)
{
    d->u.s.yellow = malloc(sizeof(shoot_colors_y_t) * 6);
    d->u.s.yellow->st1 = 3;
    d->u.s.yellow->st2 = 3;
    d->u.s.yellow->st3 = 3;
    d->u.s.yellow->st4 = 3;
    d->u.s.yellow->st5 = 3;
    d->u.s.yellow->st6 = 3;
    d->u.s.red = malloc(sizeof(shoot_colors_r_t) * 6);
    d->u.s.red->st1 = 1;
    d->u.s.red->st2 = 1;
    d->u.s.red->st3 = 1;
    d->u.s.red->st4 = 1;
    d->u.s.red->st5 = 1;
    d->u.s.red->st6 = 1;
}
