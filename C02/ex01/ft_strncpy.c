/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:14:46 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 11:14:46 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	place;

	place = 0;
	while (src[place] != '\0' && place < n)
	{
		dest[place] = src[place];
		place++;
	}
	while (place < n)
	{
		dest[place] = '\0';
		place++;
	}
	return (dest);
}
