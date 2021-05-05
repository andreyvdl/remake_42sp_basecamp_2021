/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:13:46 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 12:13:46 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	place;

	place = 0;
	while (str[place] != '\0')
	{
		if (str[place] >= 'A' && str[place] <= 'Z')
			str[place] += 32;
		place++;
	}
	return (str);
}
