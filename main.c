/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            usage();
	} else
            write(2, "Bad usage, try '-h' option!\n", 28);
	exit (84);
    } else if (ac == 8) {
        for (int i = 1; i < ac; i++) {
            if (this_is_number(av[i]) == 0) {
                write(2, "ONLY NUMBERS!\n", 14);
                return (84);
            }
        }
        options(av);
    } else {
        write(2, "Error! Check number of arguments!\n", 34);
        exit (84);
    }
}
