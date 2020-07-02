/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:48:02 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/04 14:24:37 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < (size - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < (size - 1))
	{
		*(dest + i) = '\0';
		i++;
	}
	*(dest + i) = '\0';
	return (i);
}
