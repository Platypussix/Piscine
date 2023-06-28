/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:14:43 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/28 15:23:28 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		x = nb * x;
		power--;
	}
	return (x);
}
/*
#include <stdio.h>
int	main (int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_iterative_power(*av[1] - 48, *av[2] - 48));
	return (0);
}
*/
