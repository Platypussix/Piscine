/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:35:20 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/03 13:38:38 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	m;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = malloc(sizeof(int));
		*range = 0;
		return (0);
	}
	m = (max - min);
	*range = malloc(sizeof(int) * m);
	if (!range)
		return (-1);
	while (i < m)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (m);
}
/*
#include <stdio.h>
int	main()
{
	int	*tab;
	printf("%d\n", ft_ultimate_range(&tab, 10, 20));
}
*/
