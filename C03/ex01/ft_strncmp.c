/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:42:22 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/06 12:42:22 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	place;
	int				equal;

	place = 0;
	equal = 0;
	if (n == 0)
		return ((unsigned char)s1[place] - (unsigned char)s2[place]);
	while ((s1[place] != '\0' || s2[place] != '\0') && place <= n - 1)
	{
		if (s1[place] != s2[place])
			return ((unsigned char)s1[place] - (unsigned char)s2[place]);
		place++;
	}
	return (equal);
}
