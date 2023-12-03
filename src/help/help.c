/*
** EPITECH PROJECT, 2022
** help.c
** File description:
** help
*/

#include "my_defender.h"

int help(void)
{
    int fd = open("help", O_RDONLY);
    char *buff = malloc(sizeof(char) * (6998 + 1));

    read(fd, buff, 6998);
    buff[6999] = '\0';
    my_putstr(buff);
    free(buff);
    return (0);
}
