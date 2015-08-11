/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 13:52:27 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/10 16:26:45 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		a;

	a = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb > 0 && nb <= 12)
	{
		a = nb * ft_recursive_factorial(nb - 1);
		return (a);
	}
	return (0);
}
