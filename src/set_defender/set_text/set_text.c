/*
** EPITECH PROJECT, 2022
** DEFENDER_SOLO
** File description:
** set_text
*/

#include "my_defender.h"

void set_text(defender_t *d)
{
    for (int i = 0; i != 25; i++)
        d->text[i] = NULL;
    d->text[0] = create_text(FONT, (sfVector2f){861, 783}, "SHOP", 100);
    d->text[1] = create_text(FONT, (sfVector2f){605, 390}, "10 GEM", 80);
    d->text[2] = create_text(FONT, (sfVector2f){857, 390}, "30 GEM", 80);
    d->text[3] = create_text(FONT, (sfVector2f){1110, 390}, "70 GEM", 80);
    d->text[4] = create_text(FONT, (sfVector2f){1685, 10}, "EXIT", 45);
    d->text[5] = create_text(FONT, (sfVector2f){690, 550}, "MUSIC", 45);
    d->text[6] = create_text(FONT, (sfVector2f){220, 110}, "3", 75);
    d->text[7] = create_text(FONT, (sfVector2f){220, 10}, "10", 75);
    d->text[8] = create_text(DIE_F, (sfVector2f){400, 150}, "HEY !", 100);
    d->text[9] = create_text(DIE_F, (sfVector2f){670, 167},
    "So you want to\nknow how to play ?", 40);
    d->text[10] = create_text(DIE_F, (sfVector2f){400, 300},
    "You start by laying 2 towers on the map\nto defend your home.", 30);
    d->text[11] = create_text(DIE_F, (sfVector2f){400, 369},
    "there is 4 differents towers available :", 30);
    set_text_two(d);
}

void set_text_two(defender_t *d)
{
    d->text[12] = create_text(DIE_F, (sfVector2f){400, 550},
    "when you have placed your towers,", 30);
    d->text[13] = create_text(DIE_F, (sfVector2f){400, 599},
    "press              to launch the attack !", 30);
    d->text[14] = create_text(DIE_F, (sfVector2f){400, 649},
    "Now, your towers will attak mobs.", 30);
    d->text[15] = create_text(DIE_F, (sfVector2f){400, 689},
    "if you have enough coins, you can\nbuy other towers and ...", 30);
    d->text[16] = create_text(DIE_F, (sfVector2f){470, 760},
    "yes there is an 'and'", 30);
    d->text[17] = create_text(DIE_F, (sfVector2f){380, 813},
    "You can also place:", 30);
    d->text[18] = create_text(FONT, (sfVector2f){1205, 285},
    "PLAY", 92);
    d->text[19] = create_text(DIE_F, (sfVector2f){40, 894},
    "HELP", 70);
    set_text_three(d);
}

void set_text_three(defender_t *d)
{
    d->text[20] = create_text(FONT, (sfVector2f){700, 390}, "CONTINUE", 150);
    d->text[21] = create_text(FONT, (sfVector2f){815, 510}, "+ 50p", 180);
    d->text[22] = create_text(FONT, (sfVector2f){830, 510}, "+ 0p", 180);
    d->text[24] = create_text(FONT, (sfVector2f){480, 10}, "SCORE :", 50);
    d->text[25] = create_text(FONT, (sfVector2f){650, 697}, "1,99$", 70);
    d->text[26] = create_text(FONT, (sfVector2f){885, 697}, "29,99$", 70);
    d->text[27] = create_text(FONT, (sfVector2f){1140, 697}, "79,99$", 70);
}
