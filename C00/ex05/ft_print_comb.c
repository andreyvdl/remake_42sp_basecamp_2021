/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:39:49 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/03 13:39:49 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	C;
	char	X;
	char	I;

	C = '/';
	while (++C <= '7')
	{
		X = C;
		while (++X <= '8')
		{
			I = X;
			while (++I <= '9')
			{
				ft_putchar(C);
				ft_putchar(X);
				ft_putchar(I);
				if (C < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
