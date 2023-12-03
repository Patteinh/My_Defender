/*
** EPITECH PROJECT, 2022
** my_defender_struct.H
** File description:
** my_defender_struct
*/

#ifndef MY_DEFENDER_STRUCT_H
    #define MY_DEFENDER_STRUCT_H

enum game_state {
    S_MENU,
    S_SET,
    S_SHOP,
    S_PLAY,
    S_PAUSE,
    S_WIN,
    S_LOSE,
    S_HELP,
};

enum point {
    NONE,
    RED,
    BLUE,
    YELLOW,
    GREEN,
};

typedef struct st_music {
    sfMusic *spell_lightning;
    sfMusic *spell_freeze;
    sfMusic *place_tower;
    sfMusic *validation;
    sfMusic *start_game;
    sfMusic *spell_fire;
    sfMusic *spell_acid;
    sfMusic *fire_ball;
    sfMusic *ingame;
    sfMusic *click;
    sfMusic *lose;
    sfMusic *menu;
    sfMusic *win;
} music_t;

typedef struct st_life_mob {
    int life_gob;
    int life_sword;
    int life_haxe;
    int life_red;
    int life_gol;
    int life_vik;
    int dead_gob;
    int dead_sword;
    int dead_haxe;
    int dead_red;
    int dead_gol;
    int dead_vik;
    int nbr_mobs_win;
} life_t;

typedef struct st_pause {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} pause_t;

typedef struct st_win_button {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} win_button_t;

typedef struct st_lose_button {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} lose_button_t;

typedef struct st_menu_button {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} menu_button_t;

typedef struct st_shop {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} shop_button_t;

typedef struct st_setting {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} setting_button_t;

typedef struct st_ingame {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} ingame_button_t;

typedef struct st_text {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
} text_t;

typedef struct st_background {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} backg_t;

typedef struct st_mouse {
    sfVector2i pos;
} mouse_t;

typedef struct st_blue {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} blue_t;

typedef struct st_red {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} red_t;

typedef struct st_green {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} green_t;

typedef struct st_yellow {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} yellow_t;

typedef struct st_house {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} house_t;

typedef struct st_towers {
    blue_t *blue;
    red_t *red;
    green_t *green;
    yellow_t *yellow;
    house_t *house;
} towers_t;

typedef struct st_place_tower {
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
    int p6;
} place_tower_t;

typedef struct st_color_place {
    place_tower_t red;
    place_tower_t blue;
    place_tower_t green;
    place_tower_t yellow;
} color_place_t;

typedef struct st_go {
    int go;
    int go1;
    int go2;
    int go3;
    int go4;
    int go5;
    int go6;
} go_t;

typedef struct st_select_spell {
    int s1;
    int s2;
    int s3;
    int s4;
} select_spell_t;

typedef struct st_shoot_tower_bleu {
    int st1;
    int st2;
    int st3;
    int st4;
    int st5;
    int st6;
} shoot_colors_b_t;

typedef struct st_shoot_tower_yellow {
    int st1;
    int st2;
    int st3;
    int st4;
    int st5;
    int st6;
} shoot_colors_y_t;

typedef struct st_shoot_tower_green {
    int st1;
    int st2;
    int st3;
    int st4;
    int st5;
    int st6;
} shoot_colors_g_t;

typedef struct st_shoot_tower_red {
    int st1;
    int st2;
    int st3;
    int st4;
    int st5;
    int st6;
} shoot_colors_r_t;

typedef struct st_shoot_tower {
    shoot_colors_r_t *red;
    shoot_colors_b_t *bleu;
    shoot_colors_g_t *green;
    shoot_colors_y_t *yellow;
} shoot_t;

typedef struct st_posi {
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
    int p6;
} posi_t;

typedef struct st_sound {
    int on_off;
    int w_sound;
    int go_music;
} sound_t;

typedef struct st_utils {
    color_place_t cpt;
    go_t key;
    select_spell_t select_spell;
    life_t life;
    shoot_t s;
    posi_t p;
    sound_t so;
    sfTime time;
    sfClock *clock;
    char *score_st;
    int score;
    float sec;
    int no_t;
    int starter;
    int mark;
    int click_spell;
    int spell;
    int kill;
    int point;
    int play;
    int state;
} utils_t;

typedef struct st_point {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
} point_t;

typedef struct st_mob {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} mob_t;

typedef struct st_help {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} help_button_t;

typedef struct st_spell {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} spell_t;

typedef struct st_attack {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
} attack_t;

typedef struct st_defender {
    sfBool pause;
    utils_t u;
    sfRenderWindow *window;
    sfEvent event;
    mouse_t mouse;
    music_t *music;
    text_t *text[29];
    backg_t *background[2];
    help_button_t *help_button[20];
    menu_button_t *menu_button[10];
    shop_button_t *shop_button[24];
    setting_button_t *set_button[10];
    lose_button_t *lose_button[10];
    win_button_t *win_button[10];
    ingame_button_t *p_b[24];
    pause_t *pause_button[4];
    point_t *point[24];
    towers_t towers;
    attack_t *attack[25];
    mob_t *mob[13];
    spell_t *spell[4];
} defender_t;

#endif
