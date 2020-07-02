/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:54:10 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/04 19:06:10 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	if (*(dest + i) == '\0')
	{
		while (*(src + b) != '\0')
		{
			*(dest + i) = *(src + b);
			b++;
			i++;
		}
	}
	*(dest + i) = '\0';
	return (dest);
}