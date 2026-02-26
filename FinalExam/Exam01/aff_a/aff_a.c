/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:18:00 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/26 10:28:49 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_found_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write(1, &str[i], 1);
			write(1, "\n", 1);
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	index;

	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	index = ft_found_char(argv[1]);
	if (index == 1)
		return (0);
	write(1, "\n", 1);
	return (0);
}
