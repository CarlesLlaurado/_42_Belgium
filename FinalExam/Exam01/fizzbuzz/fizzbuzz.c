/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:02:25 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/26 11:14:38 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		print_nbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	number;

	number = 100;
	i = 1;
	while (i <= number)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else
		{
			print_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
