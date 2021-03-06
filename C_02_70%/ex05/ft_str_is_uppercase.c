/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:21:44 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/03 11:50:38 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int e;

	e = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65 || *(str + i) > 90)
		{
			e = 0;
			return (e);
		}
		i++;
	}
	return (e);
}
