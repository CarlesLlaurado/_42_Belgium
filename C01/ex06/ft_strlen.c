/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:25:21 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 10:28:11 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    int length = 0;

    i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main (void)
{
    char string[] = "Hola, me llamo Carles";
    
    int length = ft_strlen(string);
    printf("La string tiene %i, caracteres.\n", length);
}