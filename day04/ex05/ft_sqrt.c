/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:52:51 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/12 23:11:18 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int square;
	int a;

	square = nb / 3;
	a = nb;
	if (nb <= 0)
		return (0);
	else
	{
		while (nb >= 1)
		{
			nb = (square + nb / square) / 2;
			if (nb * nb == a)
				return (nb);
			else
				return (0);
		}
	}
}
