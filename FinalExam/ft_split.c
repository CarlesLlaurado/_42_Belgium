/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:17:35 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/26 10:15:56 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_count_words(char *str, char *charset)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (str[i])
    {
        if(!is_charset(str[i], charset) && (i == 0 || is_charset(str[i - 1], charset)))
            words++;
        i++;
    }
    return (words);
}

int ft_length(char *str, char *charset, int index)
{
    int i;
    int length;

    length = 0;
    i = index;
    while (str[i] && !is_charset(str[i], charset))
    {
        length++;
        i++;
    }
    return (length);
}

char    *ft_copystr(char *str, char *charset, int index)
{
    char *dest;
    int i;
    int j;

    j = 0;
    i = index;
    dest = malloc(sizeof(char) * (ft_length(str, charset, index) + 1));
    if (!dest)
        return (NULL);
    while (str[i] && !is_charset(str[i], charset))
    {
        dest[j] = str[i];
        j++;
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

char **ft_split(char *str, char *charset)
{
    char **array;
    int words;
    int i;
    int j;

    words = ft_count_words(str, charset);
    array = malloc((words + 1) * sizeof(char *));
    if (!array)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        while (is_charset(str[i], charset))
            i++;
        if (j < words)
        {
            array[j] = ft_copystr(str, charset, i);
            i += ft_length(str, charset, i);
            j++;
        }
    }
    array[j] = NULL;
    return (array);
}

int main(void)
{
    char *frase = "Hola, em dic#Carles||i<m'agrada&el Rainy75";
    char *charset = " ,|#&<";
    
    char **result;
    int i;

    result = ft_split(frase, charset);
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}  