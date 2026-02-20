/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:43:49 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/20 11:51:59 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while (s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if (s1[i] == '\0')
    {
        i = 0;
        while (s1[i])
            write(1, &s1[i++], 1);
    }
}
int main(int argc, char *argv[])
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}