/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:02:23 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/11 14:52:00 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int temp;

    char str[] = "carlesllaurado";
    
    temp = ft_str_is_lowercase(str);

    printf("return is: %i\n", temp);
}
*/
