/*
** EPITECH PROJECT, 2022
** My_defender
** File description:
** my_itoa
*/

#include "my_defender.h"

char *my_itoa(int nbr)
{
    int len;
    char *score_str;
    int stock;

    stock = nbr;
    len = 0;
    while (stock > 0) {
        stock /= 10;
        len++;
    }
    score_str = malloc(sizeof(*score_str) * (len + 1));
    score_str[len] = '\0';
    while (len--) {
        score_str[len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (score_str);
}
