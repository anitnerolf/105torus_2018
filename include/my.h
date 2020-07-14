/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** my.h
*/

#ifndef	MY_H_
#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

typedef	struct	integers
{
    int	a0;
    int	a1;
    int	a2;
    int	a3;
    int	a4;
    int	f;
    int	k;
    int	n;
    double	a;
    double	b;
    double	y;
    double	r1;
    double	r2;
    double	f1;
    double	f2;
    double	f3;
    double	z1;
    double	z2;
    double	m;
}	integers_t;

double	calc_second(integers_t *i, double x);
double	calc_third(integers_t *i, double x);
int	this_is_number(char *str);
integers_t	*get_int(char **av);
void	usage(void);
void	options(char **av);
void	bisection_method(char **av);
void	newtons_method(char **av);
void	secant_method(char **av);
void	bisection_part(char **av, integers_t *i);

#endif /* MY_H_ */
