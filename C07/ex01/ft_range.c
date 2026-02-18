/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:53:15 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/18 11:05:48 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 10;
	int max = 15;
	
	int *arr = ft_range(min, max);
	int i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}


}
*/
