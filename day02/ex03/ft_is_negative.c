/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:40:15 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/11 09:44:05 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_putchar(int n)

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else if (n <= -1)
	{
		ft_putchar('N');
	}
}
