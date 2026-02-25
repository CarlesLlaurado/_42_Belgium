/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllaurad <cllaurad@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:54:50 by cllaurad          #+#    #+#             */
/*   Updated: 2026/02/25 11:16:22 by cllaurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	if (!tab || !f)
		return (0);
	asc = 1;
	desc = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		else if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (asc == 0 && desc == 0)
			return (0);
		i++;
	}
	return (1);
}
