/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 14:38:07 by fcoudert          #+#    #+#             */
/*   Updated: 2019/09/02 08:25:12 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int dt;
	int mt;

	dt = *a / *b;
	mt = *a % *b;
	*a = dt;
	*b = mt;
}
