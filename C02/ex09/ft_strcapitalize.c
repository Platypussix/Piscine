/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:24:07 by amedioun          #+#    #+#             */
/*   Updated: 2022/09/20 18:45:56 by amedioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str [i] = str[i] - 32;
			j = 1;
		}
		else if (j == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			|| (j == 0 && (str[i] >= 'A' && str[i] <= 'Z')))
			j = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*int     main(void)
{
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return (0);
}*/
