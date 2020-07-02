/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:07:48 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/06 09:21:12 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int b;

	i = 0;
	b = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	if (*(dest + i) == '\0')
	{
		while (*(src + b) != '\0' && b < nb)
		{
			*(dest + i) = *(src + b);
			b++;
			i++;
		}
	}
	*(dest + i) = '\0';
	return (dest);
}
