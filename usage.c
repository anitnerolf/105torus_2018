/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** usage
*/

#include "my.h"

void	usage(void)
{
    printf("USAGE\n");
    printf("\t./105torus opt a0 a1 a2 a3 a4 n\n");
    printf("\nDESCRIPTION\n");
    printf("\topt\tmethod option:\n");
    printf("\t\t\t1 for the bisection method\n");
    printf("\t\t\t2 for the Newton's method\n");
    printf("\t\t\t3 for the secant method\n");
    printf("\ta[0-4]\tcoefficients of the equation\n");
    printf("\tn\tprecision (the application of the");
    printf(" polynomial to the solution should\n");
    printf("\t\tbe smaller than 10^-n)\n");
}

double	calc_second(integers_t *i, double x)
{
    double	a = (i->a4 * pow(x, 4));
    double	b = (i->a3 * pow(x, 3));
    double	c = (i->a2 * pow(x, 2));
    double	d = (i->a1 * x);
    double	e = i->a0;

    return (a + b + c + d + e);
}

double	calc_third(integers_t *i, double x)
{
    double	a = (4 * i->a4 * pow(x, 3));
    double	b = (3 * i->a3 * pow(x, 2));
    double	c = (2 *i->a2 * x);
    double	d = i->a1;

    return (a + b + c + d);
}
