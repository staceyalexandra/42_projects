/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:55:20 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/12 21:23:11 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 33 || nb < -33)
		return (0);
	else if (nb < 2)
		return (nb);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
