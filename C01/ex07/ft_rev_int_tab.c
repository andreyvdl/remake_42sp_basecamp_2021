/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3621/05/04 13:10:07 by avictor-          #+#    #+#             */
/*   Updated: 3621/05/04 13:10:07 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabFrontHolder;
	int	tabEndHolder;
	int	sizeHolder;

	sizeHolder = size;
	size = 0;
	while (sizeHolder != size)
	{
		tabFrontHolder = tab[size];
		tabEndHolder = tab[sizeHolder - 1];
		tab[size] = tabEndHolder;
		tab[sizeHolder - 1] = tabFrontHolder;
		size++;
		if (sizeHolder != size)
			sizeHolder--;
	}
}
