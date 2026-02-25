/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:57:38 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 16:23:33 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H

# define DO_OP_H

# include <unistd.h>

int		ft_suma(int n1, int n2);
int		ft_resta(int n1, int n2);
int		ft_multiplicacion(int n1, int n2);
int		ft_division(int n1, int n2);
int		ft_modulo(int n1, int n2);

int		ft_atoi(char *str);
void	ft_print_nbr(int nbr);
int		ft_divmod(char c, int n2);
void	ft_ayuda(int n1, int n2, char *op);

#endif
