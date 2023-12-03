/*
** EPITECH PROJECT, 2022
** create_text.c
** File description:
** create_text
*/

#include "my_defender.h"

text_t *create_text(char *Font, sfVector2f pos, char *text, int size)
{
    text_t *w = malloc(sizeof(text_t));
    if (w == NULL)
        return (NULL);
    w->txt = sfText_create();
    w->Font = sfFont_createFromFile(Font);
    sfText_setString(w->txt, text);
    sfText_setFont(w->txt, w->Font);
    sfText_setCharacterSize(w->txt, size);
    sfText_setPosition(w->txt, pos);
    return (w);
}

point_t *create_point_red(char *Font, sfVector2f pos, char *text, int size)
{
    point_t *point = malloc(sizeof(point_t));
    if (point == NULL)
        return (NULL);
    point->txt = sfText_create();
    point->Font = sfFont_createFromFile(Font);
    sfText_setString(point->txt, text);
    sfText_setFont(point->txt, point->Font);
    sfText_setCharacterSize(point->txt, size);
    sfText_setPosition(point->txt, pos);
    sfText_setFillColor(point->txt, sfRed);
    return (point);
}

point_t *create_point_blue(char *Font, sfVector2f pos, char *text, int size)
{
    point_t *point = malloc(sizeof(point_t));
    if (point == NULL)
        return (NULL);
    point->txt = sfText_create();
    point->Font = sfFont_createFromFile(Font);
    sfText_setString(point->txt, text);
    sfText_setFont(point->txt, point->Font);
    sfText_setCharacterSize(point->txt, size);
    sfText_setPosition(point->txt, pos);
    sfText_setFillColor(point->txt, sfBlue);
    return (point);
}

point_t *create_point_green(char *Font, sfVector2f pos, char *text, int size)
{
    point_t *point = malloc(sizeof(point_t));
    if (point == NULL)
        return (NULL);
    point->txt = sfText_create();
    point->Font = sfFont_createFromFile(Font);
    sfText_setString(point->txt, text);
    sfText_setFont(point->txt, point->Font);
    sfText_setCharacterSize(point->txt, size);
    sfText_setPosition(point->txt, pos);
    sfText_setFillColor(point->txt, sfGreen);
    return (point);
}

point_t *create_point_yellow(char *Font, sfVector2f pos, char *text, int size)
{
    point_t *point = malloc(sizeof(point_t));
    if (point == NULL)
        return (NULL);
    point->txt = sfText_create();
    point->Font = sfFont_createFromFile(Font);
    sfText_setString(point->txt, text);
    sfText_setFont(point->txt, point->Font);
    sfText_setCharacterSize(point->txt, size);
    sfText_setPosition(point->txt, pos);
    sfText_setFillColor(point->txt, sfYellow);
    return (point);
}
