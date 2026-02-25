/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:22:17 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 10:30:37 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
