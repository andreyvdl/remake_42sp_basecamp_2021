/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:31:04 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 15:31:04 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	place;
	unsigned int	placeSrc;

	place = 0;
	placeSrc = 0;
	while (dest[place] != '\0')
		place++;
	while (src[placeSrc] != '\0' && placeSrc < size)
	{
		dest[place] = src[placeSrc];
		placeSrc++;
		place++;
	}
	dest[place] = '\0';
	return (place);
}
