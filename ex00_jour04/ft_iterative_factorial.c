/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 10:05:19 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/11 13:33:37 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		a;
	int		b;

	b = 1;
	a = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0 && nb <= 12)
	{
		while (a <= nb)
		{
			b = b * a;
			a++;
		}
		return (b);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	return (0);
}
