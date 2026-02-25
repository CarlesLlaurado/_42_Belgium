/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:11:04 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 16:25:15 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_ayuda(int n1, int n2, char *op)
{
	int		(*operaciones[5])(int, int);
	char	*signos;
	int		i;

	operaciones[0] = ft_suma;
	operaciones[1] = ft_resta;
	operaciones[2] = ft_multiplicacion;
	operaciones[3] = ft_division;
	operaciones[4] = ft_modulo;
	signos = "+-*/%";
	i = 0;
	while (signos[i])
	{
		if (signos[i] == op[0] && op[1] == '\0')
		{
			ft_print_nbr(operaciones[i](n1, n2));
			write(1, "\n", 1);
			return ;
		}
		i++;
	}
	write(1, "0\n", 2);
}

int	main(int argc, char *argv[])
{
	int		n1;
	int		n2;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (!ft_divmod(argv[2][0], n2))
		return (0);
	ft_ayuda(n1, n2, argv[2]);
	return (0);
}
