/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:23:57 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/18 12:48:21 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char *ft_cpystr(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string_arr;
	char	*temp;
	int		total_length;
	int		i;

	if (size == 0)
	{
		string_arr = malloc(sizeof(char));
		if (string_arr)
			*string_arr = 0;
		return (string_arr);
	}
	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_length(strs[i]);
		i++;
	}
	total_length += ft_length(sep) * (size - 1);
	string_arr = malloc(total_length * sizeof(char) + 1);
	if (string_arr == NULL)
		return (NULL);

	temp = string_arr;
	i = 0;
	while (i < size)
	{
		temp = ft_cpystr(temp, strs[i]);
		if ( i < size - 1)
			temp = ft_cpystr(temp, sep);
		i++;
	}
	*temp = '\0';
	return (string_arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int size = 3;
	char *sep = "||";
	char *strs[] = {"Carles", "Rafaela", "Ricard"};

	char *result = ft_strjoin(size, strs, sep);
	printf("%s", result);
	return (0);
}
*/
