/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:47:45 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/18 10:52:21 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(length * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int main(void)
{
	char *palabra = "Carles";
	printf("%s\n", palabra);
	char *copy = ft_strdup(palabra);
	printf("%s\n", copy);
}
*/
