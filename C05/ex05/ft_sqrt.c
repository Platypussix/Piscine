/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:41:41 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/02 21:14:19 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb >= 2)
	{
		while (i <= nb / i)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
void	main(void)
{
	printf("%d\n", ft_sqrt(-874));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(1 << 30));
}
*/
