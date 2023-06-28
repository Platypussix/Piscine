/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:09:35 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/26 22:01:00 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb <= 2)
		return (2);
	if ((nb % 2) == 0)
		nb++;
	i = 3;
	while (i * i <= (unsigned) nb)
	{
		if (!(nb % i))
		{
			nb = nb + 2;
			i = 1;
		}
		i = i + 2;
	}
	return (nb);
}
/*
#include<stdio.h>
void	main(void)
{
	printf("-2: %d\n", ft_find_next_prime(-2));
	printf("0: %d\n", ft_find_next_prime(0));
	printf("2: %d\n", ft_find_next_prime(2));
	printf("3: %d\n", ft_find_next_prime(3));
	printf("8: %d\n", ft_find_next_prime(8));
	printf("13: %d\n", ft_find_next_prime(13));
	printf("32: %d\n", ft_find_next_prime(32));
	printf("176: %d\n", ft_find_next_prime(176));
}
*/
