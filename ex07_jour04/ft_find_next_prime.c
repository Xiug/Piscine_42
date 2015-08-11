/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 19:58:01 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/11 20:39:10 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		racine(int nb)
{
	int a;
	int res;

	res = 0;
	a = 1;
	while (nb > 0 && res < nb && a <= 46340)
	{
		res = a * a;
		a++;
	}
	return (a);
}

int		premier(int nb)
{
	int a;
	int res;

	res = racine(nb);
	a = 3;
	while (a <= res)
	{
		if (nb % a == 0 || nb <= 1)
		{
			return (0);
		}
		a += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (premier(nb) == 0)
	{
		++nb;
	}
	return (nb);
}
