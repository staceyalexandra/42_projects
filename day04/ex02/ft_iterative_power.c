/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:00:10 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/12 21:25:43 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_interative_power(int nb, int power)
{
	int count;

	count = nb;
	if (nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb *= count;
			power--;
		}
		return (nb);
	}
}
