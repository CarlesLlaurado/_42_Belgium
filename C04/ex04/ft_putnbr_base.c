/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:42:23 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/16 12:11:22 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_length(char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	return (length);
}

int	valid_base(char *base)
{
	int	i;
	int	j;
	int	length;

	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	length = base_length(base);
	j = 0;
	i = 0;
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (length);
}

void	recursive(unsigned int nbr, unsigned int base_length, char base_ex[])
{
	if (nbr >= base_length)
	{
		recursive((nbr / base_length), (unsigned int)base_length, base_ex);
	}
	write(1, &base_ex[(nbr % base_length)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				bl;
	unsigned int	op;

	bl = valid_base(base);
	if (bl == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		op = -(unsigned int)nbr;
	}
	else
		op = (unsigned int)nbr;
	recursive(op, bl, base);
}
/*
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
        return (0);
    ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
