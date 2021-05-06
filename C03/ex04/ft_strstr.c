/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:00:57 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 14:00:57 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	place;
	int	placeFind;

	if (to_find[0] == '\0')
		return (str);
	place = 0;
	while (str[place] != '\0')
	{
		placeFind = 0;
		while (str[place + placeFind] == to_find[placeFind])
		{
			if (to_find[placeFind + 1] == '\0')
				return (&str[place]);
			placeFind++;
		}
		place++;
	}
	return ('\0');
}
