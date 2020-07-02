/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:56:20 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/09 15:15:58 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-'))
		{
			return (0);
		}
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		taille_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if (i == 1)
	{
		return (0);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int r;

	r = 0;
	size = 0;
	size = taille_base(base);
	if (base_error(base) && (size != 1))
	{
		if (nbr < 0)
		{
			write(1, &"-", 1);
			nbr = -nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= 0 && nbr <= 9)
		{
			ft_putchar('0' + nbr);
		}
		else
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
	}
}
