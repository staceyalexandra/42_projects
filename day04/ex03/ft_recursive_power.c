/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:24:52 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/12 21:28:27 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int count;

	if (nb < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power % 2 == 0)
	{
		count = ft_recursive_power(nb, (power / 2));
		return (count * count);
	}
	else
	{
		return (nb + ft_recursive_power(nb, (power - 1)));
	}
}
