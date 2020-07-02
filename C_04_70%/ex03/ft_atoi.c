/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 08:42:08 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/08 10:59:09 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rsign(int b, int *sign)
{
	if (b % 2 == 1)
	{
		*sign = -1;
	}
	else if (b % 2 == 0)
	{
		*sign = 1;
	}
}

int		ft_atoi(char *str)
{
	int sign;
	int resu;
	int b;

	b = 0;
	resu = 0;
	while (*str && (*str == ' ' || *str == '\f' ||
				*str == '\n' || *str == '\r' ||
				*str == '\t' || *str == '\v'))
	{
		++str;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			b++;
		++str;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		resu = resu * 10 + (*str - '0');
		++str;
	}
	rsign(b, &sign);
	return (sign * resu);
}
