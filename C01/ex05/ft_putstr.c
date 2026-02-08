/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:20:41 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 10:24:31 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(STDOUT_FILENO, &str[i], 1);
        i++;
    }
    write(STDOUT_FILENO, "\n", 1);
}

int main(void)
{
    char string[] = "Hola, me llamo Carles";

    ft_putstr(string);
}