/*
** EPITECH PROJECT, 2022
** select_redirections.c
** File description:
** select_redirections
*/

#include "my_defender.h"

void state_selection(defender_t *d)
{
    d->u.state == S_MENU ? go_menu(d) : 0;
    d->u.state == S_SET ? go_settings(d) : 0;
    d->u.state == S_SHOP ? go_shop(d) : 0;
    d->u.state == S_PLAY ? go_play(d) : 0;
    d->u.state == S_PAUSE ? go_pause(d) : 0;
    d->u.state == S_WIN ? go_win(d) : 0;
    d->u.state == S_LOSE ? go_lose(d) : 0;
    d->u.state == S_HELP ? go_help(d) : 0;
}

void mouse_redirection(defender_t *d)
{
    SET && ACTUAL_MENU ? GO_SET : 0;
    CLOSE_H && ACTUAL_HELP ? GO_MENU : 0;
    SETT_H && ACTUAL_HELP ? GO_SET : 0;
    PLAY_H && ACTUAL_HELP ? GO_PLAY : 0;
    SHOP && ACTUAL_MENU ? GO_SHOP : 0;
    PLAY && ACTUAL_MENU ? GO_PLAY : 0;
    ((CLOSE) && (ACTUAL_SET || ACTUAL_SHOP)) ? GO_MENU : 0;
    EXIT && ACTUAL_PLAY ? GO_M_E : 0;
    START && ACTUAL_PLAY && NB_TOWER == 2 ? GO_START, d->u.starter = 1 : 0;
    HELP && ACTUAL_MENU ? GO_HELP : 0;
    ((GO_MENU_L) && (ACTUAL_LOSE || ACTUAL_WIN)) ? GO_MENU : 0;
    ((REST_LOSE) && (ACTUAL_LOSE || ACTUAL_WIN)) ? GO_PLAY, reset_utils(d) : 0;
    PAUSE && ACTUAL_PLAY ? GO_PAUSE : 0;
    CONTINUE && ACTUAL_PAUSE ? GO_PLAY : 0;
}
