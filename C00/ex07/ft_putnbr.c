/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:43:08 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 11:32:01 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{   
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }

    c = (nb % 10) + '0';
    write(1, &c, 1);
}


int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);
    return (0);
}