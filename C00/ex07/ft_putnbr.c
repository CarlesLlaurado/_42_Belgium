/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:43:08 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/10 22:28:35 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}*/
