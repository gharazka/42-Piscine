/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:01:53 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/11 14:08:41 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	change;

	i = 0;
	change = 32;
	while (str[i] != '\0')
	{
		if ('a' < str[i] && str[i] < 'z')
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
	char	str[7] = "AZ";

	printf("%s\n", ft_strlowcase(str));
}
*/
