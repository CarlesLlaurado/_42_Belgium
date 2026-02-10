/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:00:53 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 15:32:02 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_stri_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= '1' && str[i] <= '9')))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    int temp;

    char str[] = "123345";
    
    temp = ft_stri_is_numeric(str);

    printf("return is: %i\n", temp);
}