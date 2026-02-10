/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:06:41 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/10 21:13:37 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main (void)
{
    int a = 10;
    int b = 20;
    
    int *ptra = &a;
    int *ptrb = &b;

    printf("a: %i and b: %i\n", a, b);
    ft_swap(ptra, ptrb);
    printf("a: %i and b: %i\n", a, b);

}
*/
