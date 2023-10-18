/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:01:53 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/10 20:57:53 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	change;

	i = 0;
	change = -32;
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
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
	char	str[5] = "Azaz";

	printf("%s", ft_strupcase(str));
}
*/
