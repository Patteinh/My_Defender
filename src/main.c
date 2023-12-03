/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "my_defender.h"

int check_start(int ac , char **av)
{
    if (ac == 2 && !my_strcmp(av[1], "-h"))
        return (help());
    if (ac == 1)
        return (defender());
    my_printf("./my_defender: bad arguments: %d given, need 1"
    "\nretry with -h\n", ac);
    return (84);
}

int main(int ac, char **av)
{
    if (check_start(ac, av))
        return (84);
    return (0);
}
