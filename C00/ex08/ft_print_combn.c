/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:35:41 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 12:42:43 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(int n);

// void ft_print_combn(int n)
// {
//     int x;
//     int y;
    
//     if (n < 0 || n > 10)
//     {
//         return ;
//     }

//     x = 0;
//     while (x < 9)
//     {
//          y = x + 1;
//          while (y < 10)
//          {
//             ft_putchar(x);
//             ft_putchar(y);
//             if (!(x == 8 && y == 9))
//                 write(1, " ,", 2);
//             y++;
//          }
//          x++;
//     }
//     write(1, "\n", 1);
// }

void ft_print_combn(int n)
{
    int x;
    int temp;
    int i;
    
    if (n < 0 || n > 10)
    {
        return ;
    }

    i = 0;
    while (i < n)
    {

    }
}

void    ft_putchar(int n)
{
    int i;

    i = n + '0';
    write(1, &i, 1);
}

int main (void)
{
    int n = 2;

    ft_print_combn(n);
}