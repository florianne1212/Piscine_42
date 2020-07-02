/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 08:21:37 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/15 15:15:30 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int g;
	int *tab;
	int i;
	int j;

	j = 0;
	i = min;
	if (min > max || min == max)
	{
		tab = NULL;
		return (tab);
	}
	g = max - min;
	tab = malloc(sizeof(int) * g);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
