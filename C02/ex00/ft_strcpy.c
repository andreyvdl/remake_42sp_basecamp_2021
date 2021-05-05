/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:06:36 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/05 11:06:36 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	place;

	place = 0;
	while (src[place] != '\0')
	{
		dest[place] = src[place];
		place++;
	}
	dest[place] = '\0';
	return (dest);
}
