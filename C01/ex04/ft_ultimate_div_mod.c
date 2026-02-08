/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:16:09 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 10:20:05 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp1;
    int temp2;

    temp1 = *a / *b;
    *b = *a % *b;
    *a = temp1;

}

int main(void)
{
    int a = 10;
    int b = 6;

    int *ptra = &a;
    int *ptrb = &b;

    printf("ptra: %i and ptrb: %i\n", *ptra, *ptrb);
    ft_ultimate_div_mod(ptra, ptrb);
    printf("ptra: %i and ptrb: %i\n", *ptra, *ptrb);

}