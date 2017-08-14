/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 13:40:45 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/12 21:20:36 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_interative_factorial(int nb)
{
	int i;

	if (nb < 0 || nb > 12)
		return (0);
	i = nb;
	while (i > 2)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
