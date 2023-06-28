/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:53:30 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/28 18:33:58 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	flamingo;

	i = 0;
	signe = 1;
	flamingo = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = (-signe);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		flamingo = (flamingo * 10) + (str[i] - '0');
		i++;
	}
	return (flamingo * signe);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
