/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:10:19 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/15 20:42:45 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alice(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_alice(a);
				ft_alice(b);
				ft_alice(c);
				ft_alice(',');
				ft_alice(' ');
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "789", 3);
}
