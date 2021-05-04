/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:09:59 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/04 15:09:59 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int holder;
	int checkPosition;
	int checkOthers;

	checkPosition = 0;
	while (checkPosition < size)
	{
		checkOthers = 0;
		while (checkOthers < size)
		{
			if (tab[checkPosition] < tab[checkOthers])
			{
				holder = tab[checkPosition];
				tab[checkPosition] = tab[checkOthers];
				tab[checkOthers] = holder;
			}
			checkOthers++;
		}
		checkPosition++;
	}
}
