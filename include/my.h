/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** lib.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef _MY_H
    #define _MY_H

void my_putchar(char c);
void my_putstr(char const *str);
int  my_strcmp(char const *s1, char const *s2);
void my_printf(char *str, ...);

#endif
