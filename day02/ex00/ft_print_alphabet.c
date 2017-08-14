/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:44:01 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/11 09:44:10 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char ch)

void	ft_print_alphabet(void)
{
	char ch;


	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}
