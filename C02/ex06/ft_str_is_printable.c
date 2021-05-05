/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:59:50 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 11:59:50 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	place;
	int	back;

	place = 0;
	back = 1;
	if (str[0] == '\0')
		return (back);
	while (str[place] != '\0')
	{
		if (!(str[place] >= ' ' && str[place] <= '~'))
		{
			back = 0;
			return (back);
		}
		place++;
	}
	return (back);
}
