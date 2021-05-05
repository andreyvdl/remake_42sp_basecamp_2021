/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:05:05 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 12:05:05 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	place;

	place = 0;
	while (str[place] != '\0')
	{
		if (str[place] >= 'a' && str[place] <= 'z')
			str[place] -= 32;
		place++;
	}
	return (str);
}
