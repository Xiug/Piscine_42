/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 18:48:18 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/10 19:16:28 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		a;

	a = nb;
	if (power < 0 || (nb == 0 && power != 0))
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb != 0 && power != 0 && power > 0 && power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
