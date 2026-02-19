/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:55:47 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/19 15:04:48 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);
int	ft_atoi_base(char *nbr, char *base);

int	find_malloc(int n, int base_length)
{
	long	temp;
	int		length;

	length = 0;
	temp = n;
	if (temp < 0)
	{
		temp = -temp;
		length++;
	}
	if (temp == 0)
		return (1);
	while (temp > 0)
	{
		temp /= base_length;
		length++;
	}
	return (length);
}

char	*nbr_base_to_char(int n, int malloc_length, char *base_to, char *result)
{
	long	number;
	int		i;
	int		base_length;

	number = n;
	base_length = 0;
	while (base_to[base_length])
		base_length++;
	i = malloc_length;
	result[i] = '\0';
	if (number < 0)
	{
		number = -number;
		result[0] = '-';
	}
	if (number == 0)
		result[0] = base_to[0];
	while (number > 0)
	{
		i--;
		result[i] = base_to[number % base_length];
		number /= base_length;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		base_to_length;
	int		malloc_length;
	char	*result;

	base_to_length = ft_check_base(base_to);
	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	malloc_length = find_malloc(number, base_to_length);
	result = malloc((malloc_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result = nbr_base_to_char(number, malloc_length, base_to, result);
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	char *subject = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", subject);
}
*/
