/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 08:08:53 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/17 08:17:05 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_two_to_one(char **twod, char *oned, int taille, char *sep)
{
	int i;
	int j;
	int b;

	i = 0;
	b = 0;
	while (i < taille)
	{
		j = 0;
		while (twod[i][j] != '\0')
		{
			oned[b] = twod[i][j];
			j++;
			b++;
		}
		j = 0;
		while (sep[j] != '\0' && i < taille - 1)
		{
			oned[b] = sep[j];
			b++;
			j++;
		}
		i++;
	}
	return (oned);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			count(char **str, int size, char *sep)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < size)
	{
		b += ft_strlen(str[i]);
		i++;
	}
	b += ft_strlen(sep) * (i - 1);
	return (b);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	char	*tab_error;
	int		b;
	int		i;

	i = 0;
	b = count(strs, size, sep);
	tab = 0;
	if (!(tab = malloc(sizeof(char) * b + 1)))
		return (0);
	if (!(tab_error = malloc(sizeof(char) * 1)))
		return (0);
	if (size == 0)
	{
		tab_error = "";
		return (tab_error);
	}
	tab = ft_two_to_one(strs, tab, size, sep);
	return (tab);
}
