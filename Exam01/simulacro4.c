/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulacro4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:48:40 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/13 12:14:38 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (str[0] == '\0')
        return (0);

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    while (str[i] == '-' || str[i] == '+')
    {   
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}