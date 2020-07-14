/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** this_is_number
*/

#include "my.h"

int	this_is_number(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if ((str[i] <= 57 && str[i] >= 48) || str[i] == '-')
            return (1);
        i++;
    }
    return (0);
}
