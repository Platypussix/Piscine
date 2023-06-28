/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:03:48 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/16 23:52:07 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_printnbr(int x)
{
	if (x < 10)
	{
		ft_putchar('0');
		ft_putchar(x + 48);
	}
	else
	{
		ft_putchar(x / 10 + 48);
		ft_putchar(x % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99 && b < 100)
	{
		ft_printnbr(a);
		ft_putchar(' ');
		ft_printnbr(b);
		if (a != 98)
		{
			write (1, ", ", 2);
		}
		if (b == 99 && a != 98)
		{
			a++;
			b = a + 1;
		}
		else
		{
			b++;
		}
	}
}
