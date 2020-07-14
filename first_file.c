/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** usage
*/

#include "my.h"

void	options(char **av)
{
    if (atoi(av[1]) == 1 || atoi(av[1]) == 2 || atoi(av[1]) == 3) {
        switch (atoi(av[1])) {
	case (1):
            bisection_method(av);
            break;
	case (2):
            newtons_method(av);
            break;
	case (3):
            secant_method(av);
            break;
	}
    } else
        exit (84);
}

void	bisection_part(char **av, integers_t *i)
{
    i = get_int(av);
    i->m = (i->z1 + i->z2) / 2;
    for (i->k = 1; i->k < 500; i->k++) {
        i->m = (i->z1 + i->z2) / 2;
        i->k > i->f ? printf("x = %.*f\n", i->f, i->m) : \
            printf("x = %.*f\n", i->k, i->m);
        i->f1 = calc_second(i, i->z1);
        i->f2 = calc_second(i, i->z2);
        i->f3 = calc_second(i, i->m);
        if (i->f1 * i->f3 > 0) {
            i->z1 = i->m;
        } else if (i->f1 * i->f3 < 0) {
            i->z2 = i->m;
        }
        i->r1 = round(i->z2 * pow(10, i->f));
        i->r2 = round(i->z1 * pow(10, i->f)) + 1;
        if (i->r1 == i->r2)
            break;
    }
}

void	bisection_method(char **av)
{
    integers_t	*i = malloc(sizeof(integers_t));

    i = get_int(av);
    i->m = (i->z1 + i->z2) / 2;
    if (i->f < 0)
        printf("x = %f\n", i->m);
    else {
        bisection_part(av, i);
    }
}

void	newtons_method(char **av)
{
    integers_t	*i = malloc(sizeof(integers_t));
    double	x = 0.5;

    i = get_int(av);
    while (i->k < 500) {
        i->k == 1 ? printf("x = %.1f\n", x) : printf("x = %.*f\n", i->f, x);
        i->a = calc_second(i, x);
        i->b = calc_third(i, x);
        if (i->b == 0) {
            write(2, "CANNOT DIVIDE BY 0!\n", 20);
            exit (84);
        }
        i->y = (x - (i->a / i->b));
        i->r1 = round(x * pow(10, i->f));
        i->r2 = round(i->y * pow(10, i->f));
        if (i->r1 == i->r2)
            break;
        x = i->y;
        i->k++;
    }
}

void	secant_method(char **av)
{
    integers_t	*i = malloc(sizeof(integers_t));

    i = get_int(av);
    while (i->k < 500) {
        i->f1 = calc_second(i, i->z1);
        i->f2 = calc_second(i, i->z2);
        i->m = i->z2 - (i->f2 * (i->z2 - i->z1) / (i->f2 - i->f1));
        i->k == 1 ? printf("x = %.*f\n", i->k, i->m) : \
            printf("x = %.*f\n", i->f, i->m);
        if (i->f1 == i->f2)
            exit (84);
        i->z1 = i->z2;
        i->z2 = i->m;
        i->r1 = round(i->z2 * pow(10, i->f));
        i->r2 = round(i->z1 * pow(10, i->f));
        if (i->r1 == i->r2)
            break;
        i->k++;
    }
}
