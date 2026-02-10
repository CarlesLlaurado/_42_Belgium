/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:11:28 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/10 21:15:53 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
    int a = 10;
    int b = 6;

    int d = 0;
    int m = 0;

    int *div = &d;
    int *mod = &m;

    printf("a is %i, b is %i and div is %i, and mod is %i\n", a, b, *div, *mod);
    ft_div_mod(a, b, div, mod);
    printf("a is %i, b is %i and div is %i, and mod is %i\n", a, b, *div, *mod);

}
*/
