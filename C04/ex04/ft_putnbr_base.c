/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:42:23 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/12 13:13:16 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int number_length(int n)
{
    int length = 1;

    if (n >= 10)
    {
        number_length(n / 10);
        length++;
    }
    return length;
}

int base_length(char *base)
{
    int length = 0;

    while (base[length] != '\0')
        length++;
    return length;
}

void intToString(int n, int length, char* num_array)
{
    int i = 0;
    while (i < length)
    {
        num_array[length - i] = n % 10;
        n /= 10;
        i++;
    }
}

void	ft_putnbr_base(int nbr, char *base)
{
   int nl = number_length(nbr);
   int bl = base_length(base);
   
   char *num_array[nl];
   intToString(nbr, nl, *num_array);
}
