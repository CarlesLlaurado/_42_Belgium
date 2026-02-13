/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulacro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:58:46 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/13 10:10:11 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void search_and_replace(char *str, char c, char a)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == c)
        {
            str[i] = a;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return 1;
    }
    
    char* str = argv[1];
    char letter = argv[2][0];
    char swap = argv[3][0];

    printf("%s\n", argv[1]);

    search_and_replace(str, letter, swap);

    printf("%s\n", argv[1]);

}