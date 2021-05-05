/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:18:18 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 12:18:18 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	place;

	place = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[place] != '\0')
	{
		if ((str[place] >= 'A' && str[place] <= 'Z') &&
		((str[place - 1] >= 'A' && str[place - 1] <= 'Z') ||
		(str[place - 1] >= 'a' && str[place - 1] <= 'z') ||
		(str[place - 1] >= '0' && str[place - 1 <= '9'])))
			str[place] += 32;
		if ((str[place] >= 'a' && str[place] <= 'z') &&
		(!((str[place - 1] >= 'A' && str[place - 1] <= 'Z') ||
		(str[place - 1] >= 'a' && str[place - 1] <= 'z') ||
		(str[place - 1] >= '0' && str[place - 1] <= '9'))))
			str[place] -= 32;
		place++;
	}
	return (str);
}
