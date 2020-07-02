/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:00:42 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/16 11:30:52 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int g;
	int i;
	int j;

	j = 0;
	i = min;
	g = max - min;
	if (min > max || min == max)
	{
		*range = 0;
		return (0);
	}
	tab = 0;
	if (!(tab = malloc(sizeof(int) * g)))
		return (-1);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	*range = tab;
	return (g);
}
