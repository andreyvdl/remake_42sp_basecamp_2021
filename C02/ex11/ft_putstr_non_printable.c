/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:45:03 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 14:45:03 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char h)
{
	if (h == 0)
		write(1, "00", 2);
	else if (h == 1)
		write(1, "01", 2);
	else if (h == 2)
		write(1, "02", 2);
	else if (h == 3)
		write(1, "03", 2);
	else if (h == 4)
		write(1, "04", 2);
	else if (h == 5)
		write(1, "05", 2);
	else if (h == 6)
		write(1, "06", 2);
	else if (h == 7)
		write(1, "07", 2);
	else if (h == 8)
		write(1, "08", 2);
	else if (h == 9)
		write(1, "09", 2);
	else if (h == 10)
		write(1, "0a", 2);
	else if (h == 11)
		write(1, "0b", 2);
}

void	ft_hexa2(char h)
{
	if (h == 12)
		write(1, "0c", 2);
	else if (h == 13)
		write(1, "0d", 2);
	else if (h == 14)
		write(1, "0e", 2);
	else if (h == 15)
		write(1, "0f", 2);
	else if (h == 16)
		write(1, "10", 2);
	else if (h == 17)
		write(1, "11", 2);
	else if (h == 18)
		write(1, "12", 2);
	else if (h == 19)
		write(1, "13", 2);
	else if (h == 20)
		write(1, "14", 2);
	else if (h == 21)
		write(1, "15", 2);
	else if (h == 22)
		write(1, "16", 2);
	else if (h == 23)
		write(1, "17", 2);
}

void	ft_hexa3(char h)
{
	if (h == 24)
		write(1, "18", 2);
	else if (h == 25)
		write(1, "19", 2);
	else if (h == 26)
		write(1, "1a", 2);
	else if (h == 27)
		write(1, "1b", 2);
	else if (h == 28)
		write(1, "1c", 2);
	else if (h == 29)
		write(1, "1d", 2);
	else if (h == 30)
		write(1, "1e", 2);
	else if (h == 31)
		write(1, "1f", 2);
	else if (h == 127)
		write(1, "7f", 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	place;

	place = 0;
	while (str[place])
	{
		if (str[place] >= 0 && str[place] <= 11)
		{
			write(1, "\\", 1);
			ft_hexa(str[place]);
		}
		else if (str[place] >= 12 && str[place] <= 23)
		{
			write(1, "\\", 1);
			ft_hexa2(str[place]);
		}
		else if ((str[place] >= 24 && str[place] <= 31) ||
		str[place] == 127)
		{
			write(1, "\\", 1);
			ft_hexa3(str[place]);
		}
		else
			write(1, &str[place], 1);
		place++;
	}
}
