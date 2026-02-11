/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:43:54 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/11 13:52:44 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	islowalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int isupperalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (islowalpha(str[i]) == 0 && isupperalpha(str[i]) == 0)
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

    char str[] = "afjkasdhfasdhfkjsa";
    temp = ft_str_is_alpha(str);
    printf("return is: %i\n", temp);

	char str2[] = "AbcfrsstCses123";
    temp = ft_str_is_alpha(str2);
    printf("return is: %i\n", temp);
}

