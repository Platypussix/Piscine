/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:19:33 by amedioun          #+#    #+#             */
/*   Updated: 2022/10/06 11:36:50 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char x)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == x)
			return (1);
		i++;
	}
	return (0);
}

int	ft_splitlen(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (check_sep(charset, str[i]) == 1)
		{
			while (check_sep(charset, str[i]) == 1)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count + 1);
}

char	*split_dup(char *src)
{
	char	dest;
	int		i;

	i = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		start;
	int		finish;

	tab = malloc(sizeof(char) * ft_splitlen(str, charset));
	if (!tab)
		return (0);
	i = 0;
	while (str[i])
	{
		while (check_sep(charset, str[i]))
			i++;
	}
}
