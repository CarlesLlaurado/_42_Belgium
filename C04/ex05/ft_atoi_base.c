/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:09:38 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/16 16:19:24 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	run_spaces(char *str, int *sign)
{
	int	i;

	*sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	inside_loop(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c)
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	base_length;
	int	sign;
	int	i;
	int	j;

	if (!is_valid(base))
		return (0);
	n = 0;
	base_length = 0;
	while (base[base_length])
		base_length++;
	i = run_spaces(str, &sign);
	while (str[i])
	{
		j = inside_loop(str[i], base);
		if (j == -1)
			break ;
		n = (n * base_length) + j;
		i++;
	}
	return (n * sign);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
        return (0);
    int number = ft_atoi_base(argv[1], argv[2]);

    printf("%i\n", number);
}
*/
