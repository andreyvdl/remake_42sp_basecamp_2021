/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.sp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:35:43 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/21 15:35:43 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	ft_sign(char x)
{
	if (x == '+')
	{
		x = '-';
		return (x);
	}
	else
	{
		x = '+';
		return (x);
	}
}

int	ft_atoi(char *str)
{
	static int	hold[10];
	int			atoi;
	int			n;
	int			h;
	static char	sign;

	sign = '+';
	n = 0;
	h = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '-')
			sign = ft_sign(sign);
		if (str[n] >= '0' && str[n] <= '9')
		{
			hold[h] = str[n] - '0';
			h++;
		}
		if (str[n] >= ('A' || 'a') && str[n] <= ('Z' || 'z'))
			break;
		n++;
	}
	
	return (hold);
}

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}