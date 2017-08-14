/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:37:06 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/10 23:57:34 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a, b, c;
	a = '0' , b = '1', c = '2';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if ((c != b && c != a) && (b != a))
				{
					printf("%c%c%c" a, b, c);
					c++;
					continue;
				}	
			else 
				{
					if (c == ':')
					{
					c = '0';
					continue;
				}
					c++;
					}
			    }
				b++;
				c = '0';
				if (b >= '8')
				{
					b = '0';
			
				}
			}
		a++;
       }
   	
 
  }


int 	main(void)
{
	ft_print_comb();
	return (0);
}