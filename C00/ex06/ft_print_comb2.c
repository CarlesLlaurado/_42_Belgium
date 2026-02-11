/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:59:47 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/11 15:40:25 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print_number(int n)
{
	char	c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a);
			write(1, " ", 1);
			ft_print_number(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
