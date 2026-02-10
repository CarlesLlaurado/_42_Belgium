/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:35:41 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/09 23:14:05 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(int n);

void ft_print_combn(int n)
{
    int tab[10];
    
    tab[0] = 0;
    while (tab[0] <= 8)
    {
        tab[1] = tab[0] + 1;
        while (tab[1] <= 9)
        {
            ft_putchar(tab[0]);
            ft_putchar(tab[1]);
            if (!(tab[0] == 8 && tab[1] == 9))
                write(1, ", ", 2);
            tab[1]++;
        }
        tab[0]++;
    }
}

// void ft_print_combn(int n)
// {
//     int i;
    
//     i = 0;
//     while (i < n)
//     {
//         ft_putchar(n);
//         ft_print_combn(n - 1);
//         i++;
//     }
//     write(1, ", ", 2);
// }


void    ft_putchar(int n)
{
    char c;

    c = n + '0';
    write(1, &c, 1);
}

int main (int argc, char *argv[])
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = atoi(argv[1]);

    ft_print_combn(n);
}
