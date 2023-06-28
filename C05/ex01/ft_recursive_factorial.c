/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:09:33 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/02 16:14:35 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb != 1)
		nb *= ft_recursive_factorial(nb -1);
	return (nb);
}
/*
#include <stdio.h>
int	main ()
{
		printf("%d", ft_recursive_factorial(6));
	return (0);
}
*/
