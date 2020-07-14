/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** newton's method
*/

#include "my.h"

integers_t	*get_int(char **av)
{
    integers_t	*i = malloc(sizeof(integers_t));

    i->z1 = 0;
    i->z2 = 1;
    i->k = 1;
    i->f = atoi(av[7]);
    i->a0 = atoi(av[2]);
    i->a1 = atoi(av[3]);
    i->a2 = atoi(av[4]);
    i->a3 = atoi(av[5]);
    i->a4 = atoi(av[6]);
    return (i);
}
