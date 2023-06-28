/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:20:01 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/06 11:32:01 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_biglen(char **strs, int size, char *sep)
{
	int	i;
	int	bigsz;

	i = 0;
	bigsz = 0;
	while (i < size)
	{
		bigsz += ft_strlen(strs[i]);
		i++;
	}
	bigsz += (size - 1) * ft_strlen(sep) + 1;
	return (bigsz);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ft_biglen(strs, size, sep));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(strs[i], str);
		if (i < size - 1)
			ft_strcat(sep, str);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac, av, "ZIZI"));
}
*/
