/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:19:43 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 16:36:49 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_print_nbr(int nbr)
{
	long	n;
	char	c;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr;
		n = -n;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_print_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_divmod(char c, int n2)
{
	if (n2 == 0)
	{
		if (c == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		else if (c == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
	}
	return (1);
}
