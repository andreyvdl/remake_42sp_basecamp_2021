/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:29:21 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 11:29:21 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	place;
	int	equal;

	place = 0;
	equal = 0;
	while (s1[place] != '\0' || s2[place] != '\0')
	{
		if (s1[place] != s2[place])
			return ((unsigned char)s1[place] - (unsigned char)s2[place]);
		place++;
	}
	return (equal);
}
