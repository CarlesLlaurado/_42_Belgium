/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:13:11 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/20 12:20:07 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void epur_str(char *str)
{
    int i = 0;
    int flag = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i])
    {
        if (str[i] !is_space)
        {
            if (flag == 1)
                write(1, " ", 1);
            flag = 0;
            write(1, &str[i], 1);
        }
        else if (is_space + 1 no es espacio y no es '\0')
            flag = 1;
    }   i++;
}