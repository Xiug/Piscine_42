/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 17:08:07 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/10 18:44:49 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		a;

	a = nb;
	if (power < 0 || (nb == 0 && power != 0))
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			a = a * nb;
			power--;
		}
		return (a);
	}
}
