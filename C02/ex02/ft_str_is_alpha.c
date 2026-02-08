/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:43:54 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 14:59:30 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        return (1);
    return (0);

}

int main(void)
{
    int temp;

    char str[] = "This is 42 Belgium";
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        temp = ft_str_is_alpha(str + i);
        printf("%c", str[i]);
    }
    printf("\n");
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        temp = ft_str_is_alpha(str + i);
        printf("%i", temp);
    }
    printf("\n");
}