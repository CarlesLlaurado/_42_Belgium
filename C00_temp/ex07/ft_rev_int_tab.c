/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:59:46 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/07 22:57:45 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < (size / 2))
    {
        temp = *(tab + i);
        *(tab + i) = *(tab + (size - 1 - i));
        *(tab + (size - 1 - i)) = temp;
        i++;
    }
    
}

int main(void)
{   
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%i", arr[i]);
    }
    printf("\n");

    return 0;
}