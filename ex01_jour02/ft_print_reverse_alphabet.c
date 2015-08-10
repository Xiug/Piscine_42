/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <gdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 14:33:25 by gdurand           #+#    #+#             */
/*   Updated: 2015/08/06 15:00:30 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char z;

	z = 'z';
	a = 'a';
	while (z > a - 1)
	{
		ft_putchar(z);
		z--;
	}
}
