/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:27:00 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/12 11:27:49 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (nb == 0 && power != 0)
	{
		return (0);
	}
	else if (nb != 0 && power == 0)
	{
		return (1);
	}
	else if (power != 1)
	{
		nb = (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
