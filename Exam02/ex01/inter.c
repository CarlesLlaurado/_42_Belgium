/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:53:16 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/20 11:59:02 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char *s1, char *s2)
{
   int i = 0;
   
   int ascii[256] = {0};
   
   while(s2[i])
   {
        ascii[(unsigned char)s2[i]] = 1;
        i++;
   }

   i = 0;
   while (s1[i])
   {
        if (ascii[(unsigned char)s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            ascii[(unsigned char)s1[i]] = 0;
        }
        i++;
   }
}