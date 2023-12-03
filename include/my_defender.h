/*
** EPITECH PROJECT, 2022
** my_defender.h
** File description:
** my_defender.h
*/

#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "my_defender_struct.h"
#include "my_defender_define.h"
#include "my.h"

#ifndef _DEFENDER_H
    #define _DEFENDER_H

void paypal(void);
char *my_itoa(int nbr);
void set_towers_attack(defender_t *d);
void set_towers_attack(defender_t *d);
int disp_attack_one(defender_t *d, int shoot_twr);
int disp_attack_two(defender_t *d, int shoot_twr);
int disp_attack_three(defender_t *d, int shoot_twr);
int disp_attack_four(defender_t *d, int shoot_twr);
int disp_attack_four_two(defender_t *d, int shoot_twr, int i);
int disp_attack_five(defender_t *d, int shoot_twr);
int disp_attack_six(defender_t *d, int shoot_twr);
int disp_attack_six_two(defender_t *d, int shoot_twr, int i);
void loop_display_attack(defender_t *d, int i, int degrees);
void set_towers_attack_two(defender_t *d);
void kill_mobs(defender_t *d);
void place_red(defender_t *d, int place);
void place_blue(defender_t *d, int place);
void place_green(defender_t *d, int place);
void place_yellow(defender_t *d, int place);
void move_attack_three(defender_t *d, int i);
void move_attack(defender_t *d, int i);
void go_help(defender_t *d);
int check_start(int ac , char **av);
int help(void);
int defender(void);
void set_defender(defender_t *d);
void set_struct_defender(defender_t *d);
void set_window_clock(defender_t *d);
void set_music(defender_t *d);
void set_text(defender_t *d);
void set_text_three(defender_t *d);
void set_background(defender_t *d);
void set_button(defender_t *d);
void set_menu_button(defender_t *d);
void set_shop_button(defender_t *d);
void set_shop_button_two(defender_t *d);
void set_shop_button_three(defender_t *d);
void set_setting_button(defender_t *d);
void set_setting_button_two(defender_t *d);
void set_lose_button(defender_t *d);
void set_win_button(defender_t *d);
void set_play_button(defender_t *d);
void set_play_button_two(defender_t *d);
void set_play_button_three(defender_t *d);
void set_pause_button(defender_t *d);
void set_sprite(defender_t *d);
void set_spell(defender_t *d);
void set_point(defender_t *d);
void set_point_two(defender_t *d);
void set_towers(defender_t *d);
void set_towers_two(defender_t *d);
void set_towers_three(defender_t *d);
void set_towers_fo(defender_t *d);
void set_attack(defender_t *d);
void set_attack_two(defender_t *d);
void set_attack_three(defender_t *d);
void set_mob(defender_t *d);
void set_mob_two(defender_t *d);
void set_text_two(defender_t *d);
void set_help_button_three(defender_t *d);
void set_help_button_two(defender_t *d);
void set_help_button(defender_t *d);
void set_life_mobs(defender_t *d);
void set_mouse_pos(defender_t *d);
void select_music(defender_t *d);
void go_music_menu(defender_t *d);
void go_music_play(defender_t *d);
void set_mouse_pos(defender_t *d);
void check_event(defender_t *d);
void defender_selection(defender_t *d);
void mouse_selection(defender_t *d);
void mouse_redirection(defender_t *d);
void mouse_mark_tower(defender_t *d);
void mouse_click_on_mark(defender_t *d);
void choice_where(defender_t *d);
void red_blue(defender_t *d);
void green_yellow(defender_t *d);
void place_t(defender_t *d, int place);
void place_red(defender_t *d, int place);
void place_blue(defender_t *d, int place);
void place_green(defender_t *d, int place);
void place_yellow(defender_t *d, int place);
void menu_on_off(defender_t *d);
void setting_on_off(defender_t *d);
void point_gestion(defender_t *d);
void print_red(defender_t *d);
void print_blue(defender_t *d);
void print_green(defender_t *d);
void print_yellow(defender_t *d);
void setting_on_off(defender_t *d);
void menu_on_off(defender_t *d);
void state_selection(defender_t *d);
void go_menu(defender_t *d);
void go_settings(defender_t *d);
void go_shop(defender_t *d);
void go_play(defender_t *d);
void draw_towers(defender_t *d);
void draw_red(defender_t *d);
void draw_blue(defender_t *d);
void draw_green(defender_t *d);
void draw_yellow(defender_t *d);
void move_e_gol_die(defender_t *d);
void move_e_gol_run(defender_t *d);
void move_e_vik_die(defender_t *d);
void move_e_vik_run(defender_t *d);
void move_e_red_die(defender_t *d);
void move_e_red_run(defender_t *d);
void move_e_haxe_die(defender_t *d);
void move_e_haxe_run(defender_t *d);
void move_e_gob_die(defender_t *d);
void move_e_gob_run(defender_t *d);
void move_e_sword_die(defender_t *d);
void move_e_sword_run(defender_t *d);
void move_mobs(defender_t *d);
void move_perso(defender_t *d);
void move_perso_one(defender_t *d);
void move_perso_two(defender_t *d);
void move_perso_three(defender_t *d);
void move_perso_four(defender_t *d);
void move_perso_five(defender_t *d);
void move_perso_continued_five(defender_t *d);
void move_perso_continued_five_three(defender_t *d);
void move_perso_continued_five_five(defender_t *d);
void move_perso_continued_five_four(defender_t *d);
void move_perso_continued_fiv_one(defender_t *d);
void move_perso_continued_fiv_two(defender_t *d);
void move_perso_continued_fiv_three(defender_t *d);
void move_perso_continued_fiv_four(defender_t *d);
void move_perso_continued_for_one(defender_t *d);
void move_perso_continued_for_two(defender_t *d);
void move_perso_continued_for_three(defender_t *d);
void move_perso_continued_for_four(defender_t *d);
void move_perso_continued_on_three_two(defender_t *d);
void move_perso_continued_on_four(defender_t *d);
void move_perso_continued_on_five_check(defender_t *d);
void move_perso_continued_on_one(defender_t *d);
void move_perso_continued_on_two(defender_t *d);
void move_perso_continued_on_three(defender_t *d);
void move_perso_continued_three_one(defender_t *d);
void move_perso_continued_three_two(defender_t *d);
void move_perso_continued_three_three(defender_t *d);
void move_perso_continued_three_four(defender_t *d);
void move_perso_continued_sec_one(defender_t *d);
void move_perso_continued_sec_two(defender_t *d);
void move_perso_continued_sec_three(defender_t *d);
void move_perso_continued_sec_four(defender_t *d);
void move_perso_continued_vi_one(defender_t *d);
void move_perso_continued_vi_two(defender_t *d);
void move_perso_continued_vi_three(defender_t *d);
void move_perso_continued_vi_four(defender_t *d);
void move_perso_continued_vi_five_check(defender_t *d);
void spell_gestion(defender_t *d);
void drop_spell_song(defender_t *d);
void drop_spell_song_two(defender_t *d);
void spell_preview(defender_t *d);
void spell_preview_two(defender_t *d);
void disp_spell_one(defender_t *d);
void disp_spell_two(defender_t *d);
void disp_spell_three(defender_t *d);
void disp_spell_four(defender_t *d);
void money_gestion(defender_t *d);
void life_money_gestion(defender_t *d);
void money_gestion(defender_t *d);
void money_starter(defender_t *d);
void money_gestion_two(defender_t *d);
void money_gestion_three(defender_t *d);
void money_gestion_four(defender_t *d);
void money_gestion_five(defender_t *d);
void money_gestion_six(defender_t *d);
void money_gestion_seven(defender_t *d);
void money_gestion_eight(defender_t *d);
void life_gestion(defender_t *d);
void life_gestion_two(defender_t *d);
void reset_utils(defender_t *d);
void reset_red_blue(defender_t *d);
void reset_green_yellow(defender_t *d);
void go_pause(defender_t *d);
void go_win(defender_t *d);
void go_lose(defender_t *d);
void free_all(defender_t *d);
void free_background(defender_t *d);
void free_button(defender_t *d);
void free_text(defender_t *d);
void destroy_all(defender_t *d);
void destroy_background_music(defender_t *d);
void destroy_rest(defender_t *d);
void destroy_button(defender_t *d);
void destroy_text(defender_t *d);
house_t create_sprite_house(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
help_button_t *create_sprite_help(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
text_t *create_text(char *Font, sfVector2f pos, char *text, int size);
setting_button_t *create_sprite_b_setting(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
shop_button_t *create_sprite_b_shop(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
menu_button_t *create_sprite_b_menu(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
backg_t *create_sprite_backg(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
lose_button_t *create_sprite_b_lose(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
win_button_t *create_sprite_b_win(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
ingame_button_t *create_sprite_b_ingame(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
pause_t *create_sprite_b_pause(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
spell_t *create_sprite_spell(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
point_t *create_point_red(char *Font, sfVector2f pos,
char *text, int size);
point_t *create_point_green(char *Font, sfVector2f pos,
char *text, int size);
point_t *create_point_blue(char *Font, sfVector2f pos,
char *text, int size);
point_t *create_point_yellow(char *Font, sfVector2f pos,
char *text, int size);
blue_t create_sprite_t_b(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
red_t create_sprite_t_r(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
green_t create_sprite_t_g(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
yellow_t create_sprite_t_y(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
mob_t *create_sprite_mob(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
attack_t *create_sprite_attack(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);

#endif
