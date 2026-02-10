/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:34:45 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/10 21:51:25 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	lowest;
	int	temp;

	y = 0;
	while (y < size - 1)
	{
		lowest = y;
		i = y + 1;
		while (i < size)
		{
			if (*(tab + lowest) > *(tab + i))
				lowest = i;
			i++;
		}
		temp = *(tab + y);
		*(tab + y) = *(tab + lowest);
		*(tab + lowest) = temp;
		y++;
	}
}
/*
int main (void)
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = 6;

    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%i", arr[i]);
    }
    printf("\n");

}
*/
