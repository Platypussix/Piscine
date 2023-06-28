/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:51:30 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/24 23:19:29 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && i < n - 1)
		i++;
	if (s1[i] != s2[i] && (n != 0))
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include<stdio.h>
int	main (int argc, char **argv)
{
	printf("%d",ft_strncmp(argv[1], argv[2], 0));
}
*/
