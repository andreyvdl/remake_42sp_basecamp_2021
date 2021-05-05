/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:45:47 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 11:45:47 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	place;
	int	back;

	place = 0;
	back = 1;
	if (str[0] == '\0')
		return (back);
	while (str[place] != '\0')
	{
		if (!(str[place] >= '0' && str[place] <= '9'))
		{
			back = 0;
			return (back);
		}
		place++;
	}
	return (back);
}
