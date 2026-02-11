/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:44:02 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/11 15:26:51 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
static int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || is_alphanumeric(str[i - 1]) == 0)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

    printf("%s\n", str);
    ft_strcapitalize(str);
    printf("%s\n", str);

}
*/
