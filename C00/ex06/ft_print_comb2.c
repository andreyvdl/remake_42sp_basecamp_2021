/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:41:05 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/03 14:41:05 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_return_combI(int combI)
{
	char c;

	c = combI / 10 + '0';
	ft_write(c);
	c = combI % 10 + '0';
	ft_write(c);
}

void	ft_return_combII(int combII)
{
	char c;
	c = combII / 10 + '0';
	ft_write(c);
	c = combII % 10 + '0';
	ft_write(c);
}
void	ft_print_comb2(void)
{
	int		combI;
	int		combII;
	char	c;

	combI = 0;
	combII = 1;
	while (combI <= 98 && combII <= 99)
	{
		ft_return_combI(combI);
		ft_write(' ');
		ft_return_combII(combII);
		if (combI != 98)
		{
			ft_write(',');
			ft_write(' ');
		}
		if (combII == 99)
		{
			combI++;
			combII = combI;
		}
		combII++;
	}
}
