/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:36:53 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 15:42:32 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
      i++;
    }
    return str;
}

int main(void)
{
    char str[] = "Hola me llamo Carles";

    printf("%s\n", str);
    ft_strlowcase(str);
    printf("%s\n", str);
}