/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:30:48 by avictor-          #+#    #+#             */
/*   Updated: 2021/05/04 12:30:48 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	Aholder;
	int Bholder;

	Aholder = *a;
	Bholder = *b;
	*a = Aholder / Bholder;
	*b = Aholder % Bholder;
}
