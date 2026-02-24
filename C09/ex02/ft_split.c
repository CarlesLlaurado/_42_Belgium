/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:42:13 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/24 13:42:22 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			if (i == 0 || ft_is_charset(str[i - 1], charset))
				words++;
		}
		i++;
	}
	return (words);
}

int	ft_length(char *str, char *charset, int index)
{
	int	i;
	int	length;

	length = 0;
	i = index;
	while (str[i] && !ft_is_charset(str[i], charset))
	{
		length++;
		i++;
	}
	return (length);
}

char	*ft_put_word(char *str, char *charset, int index)
{
	int		i;
	int		length;
	char	*word;

	length = ft_length(str, charset, index);
	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[index] && !ft_is_charset(str[index], charset))
	{
		word[i] = str[index];
		i++;
		index++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**array;

	array = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			array[j] = ft_put_word(str, charset, i);
			i += ft_length(str, charset, i);
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
    char *frase = "Hola, me#llamo|Carles+Llaurado";
    char *charset = " ,.+-@#%|";
    char **result;
    int i;

    result = ft_split(frase, charset);
    i = 0;
    
    while (result[i] != NULL) 
    {
        printf("Palabra [%d]: %s\n", i, result[i]);
        i++;
    }
    return (0);
}
*/
