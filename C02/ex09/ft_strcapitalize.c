/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:44:02 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/08 15:52:29 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            i++;
        } 
        else if ((str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

    printf("%s\n", str);
    ft_strcapitalize(str);
    printf("%s\n", str);

}