/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:51:21 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 13:05:15 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_length(char *src)
{
    int i;
    int length = 0;

    i = 0;
    while (src[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main(void)
{
    char palabra[] = "Hola, me llamo Carles";

    int length = ft_length(palabra);
    
    char copy[length + 1];

    ft_strcpy(copy, palabra);
    printf("Esto es palabra: %s\n", palabra);
    printf("Esto es copy: %s\n", copy);

}