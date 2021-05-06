/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:50:43 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 13:50:43 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	place;
	unsigned int	placeSrc;

	place = 0;
	placeSrc = 0;
	while (dest[place] != '\0')
		place++;
	while (src[placeSrc] != '\0' && placeSrc < nb)
	{
		dest[place] = src[placeSrc];
		place++;
		placeSrc++;
	}
	dest[place] = '\0';
	return (dest);
}
