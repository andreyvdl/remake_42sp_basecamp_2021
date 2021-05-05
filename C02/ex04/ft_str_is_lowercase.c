/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:51:54 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 11:51:54 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	place;
	int	back;

	place = 0;
	back = 1;
	if (str[0] == '\0')
		return (back);
	while (str[place] != '\0')
	{
		if (!(str[place] >= 'a' && str[place] <= 'z'))
		{
			back = 0;
			return (back);
		}
		place++;
	}
	return (back);
}
