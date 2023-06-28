/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:38:43 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/03 13:38:17 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	m;
	int	i;

	m = max - min;
	i = 1;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * m + 1);
	if (!tab)
		return (0);
	tab[0] = min;
	while (i < m)
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	int	*tab = ft_range(10, 20);
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
