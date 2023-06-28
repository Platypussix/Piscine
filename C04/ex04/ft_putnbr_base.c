/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:06:19 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/28 13:22:05 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char g)
{
	write (1, &g, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	nb;

	nb = nbr;
	if (check_base(base) == 0)
		return ;
	i = 0;
	while (base[i])
		i++;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (-nb);
	}
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base);
		ft_putnbr_base(nb % i, base);
	}
	else
		ft_putchar(base[nb]);
}
/*
int		main(int ac, char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
*/
