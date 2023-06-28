/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:02:53 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/03 13:45:04 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (nb < 0 || nb > 2147483647)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (i < nb)
		{
			x *= (nb - i);
			i++;
		}
		return (x);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int	main ()
{
		printf("%d", ft_iterative_factorial(6));
	return (0);
}
*/
