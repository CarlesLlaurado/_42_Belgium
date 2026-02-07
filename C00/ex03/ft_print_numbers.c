/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Carles Llauradó <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:57:30 by Carles Llaura     #+#    #+#             */
/*   Updated: 2026/02/06 11:07:35 by Carles Llaura    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
