/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:29:09 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/27 14:33:48 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	strlen;
	int	findlen;
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	strlen = ft_strlen(str);
	findlen = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && (i + j) < strlen)
			j++;
		if (j == findlen)
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	char str[] = "ce chat s'appelle pas trotinette";
	char to_find[] = "pas";
	printf("%s", ft_strstr(str, to_find));
}
*/
