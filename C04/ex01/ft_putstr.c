/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:57:47 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/07 10:57:47 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	place;

	place = 0;
	while (str[place] != '\0')
	{
		ft_write(str[place]);
		place++;
	}
}
