/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:02:34 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/07 11:02:34 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_write('-');
		nbr = nb * -1;
	}
	if (nb >= 0)
		nbr = nb;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_write(nbr % 10 + '0');
}
