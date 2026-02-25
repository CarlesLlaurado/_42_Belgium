/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:32:13 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 10:37:11 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	if (!tab || !f)
		return (NULL);
	array = malloc(sizeof(int) * length);
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
