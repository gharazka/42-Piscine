/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:01:53 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/10 22:04:01 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	change;

	i = 0;
	change = 32;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') && (str[i - 1] < 'A'
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] -= change;
		}
		else if (('A' <= str[i] && str[i] <= 'Z') && ((str[i - 1] > 'A'
					&& str[i - 1] < 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] > '0' && str[i - 1] < '9')))
		{
			str[i] += change;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[150] = "i love 42 and 3v3RYONE-here";

	printf("%s", ft_strcapitalize(str));
}
*/
