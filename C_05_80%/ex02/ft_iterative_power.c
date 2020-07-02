/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:36:48 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/12 16:03:16 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (nb == 0 && power != 0)
	{
		return (0);
	}
	else if (nb != 0 && power == 0)
	{
		return (1);
	}
	power--;
	while (power != 0)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
