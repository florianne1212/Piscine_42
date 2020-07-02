/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:02:20 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/18 14:20:21 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-", 1);
		write(1, &"2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar('0' + nb % 10);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
