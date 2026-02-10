/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:54:19 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/09 09:02:45 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

int main (void)
{
    char s1[] = "Me llamo Carles";
    char s2[] = "Me llamo Zarles";
    int n = 4;

    int j = ft_strncmp(s1, s2, n);

    printf("%i\n", j);
}