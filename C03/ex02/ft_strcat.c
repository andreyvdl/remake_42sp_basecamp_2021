/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:22:30 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 13:22:30 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	place;
	int	placeSrc;

	place = 0;
	placeSrc = 0;
	while (dest[place] != '\0')
		place++;
	while (src[placeSrc] != '\0')
	{
		dest[place] = src[placeSrc];
		place++;
		placeSrc++;
	}
	dest[place] = '\0';
	return (dest);
}
