/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:23:35 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/11 13:29:19 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_length(char *src);
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char palabra[] = "Hola, me llamo Carles";
    
    unsigned int a = 50;

    char dest[a];

    ft_strncpy(dest, palabra, a);
    printf("Esto es palabra: %s\n", palabra);
    printf("Esto es a: %i\n", a);

    int i = 0;
    while (i < a)
    {
        // Si es un caracter imprimible, lo muestra.
        if (dest[i] >= 32 && dest[i] <= 126)
            write(1, &dest[i], 1);
        // Si es nulo, imprimimos un punto rojo o un asterisco para verlo.
        else if (dest[i] == '\0')
            write(1, "*", 1); 
        // Si es basura (ni nulo ni texto), imprimimos '?'.
        else
            write(1, "?", 1);
        i++;
    }
    write(1, "\n", 1);
}
*/
