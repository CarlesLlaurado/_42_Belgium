/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulacro3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:15:57 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/13 11:43:08 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int max_pos)
{
    int i = 0;
    while (i < max_pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;


   i = 0;
   while (s1[i] != '\0')
   {
        if (check(s1, s1[i], i) == 0)
            write(1, &s1[i], 1);
        i++;
   }

   j = 0;
   while(s2[j] != '\0')
   {
        if (check(s2, s2[j], j) == 0)
            {
                if(check(s1, s2[j], i) == 0)
                    write(1, &s2[j], 1);
            }
        j++;
   }
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    write(1, "\n", 1); // El salto de línea final obligatorio
    return (0);
}