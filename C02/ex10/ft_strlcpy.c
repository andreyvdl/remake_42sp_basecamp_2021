/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:16:15 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 14:16:15 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	place;
	unsigned int	srcSize;

	place = 0;
	srcSize = 0;
	while (src[srcSize])
		srcSize++;
	while (src[place] != '\0' && size > 0 && place <= size - 1)
	{
		dest[place] = src[place];
		place++;
	}
	dest[place] = '\0';
	return (srcSize);
}
