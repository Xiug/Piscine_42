/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 12:08:20 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/09 17:47:05 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_1(int x)
{
	int		a;

	a = 0;
	while (a != x)
	{
		if (a != 0 && a != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
		}
		a++;
	}
}

void	ligne_2(int x)
{
	int		a;

	a = 0;
	while (a != x)
	{
		if (a != 0 && a != x - 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
		a++;
	}
}

void	ligne_3(int x)
{
	int	a;

	a = 0;
	while (a != x)
	{
		if (a != 0 && a != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
		}
		a++;
	}
}

void	colle(int x, int y)
{
	int		a;

	a = 0;
	while (a != y && y != 0 && x != 0)
	{
		if (a == y - 1 && a != 0)
		{
			ligne_3(x);
			ft_putchar('\n');
		}
		if (a == 0)
		{
			ligne_1(x);
			ft_putchar('\n');
		}
		if (a != y - 1 && a != 0)
		{
			ligne_2(x);
			ft_putchar('\n');
		}
		a++;
	}
}
