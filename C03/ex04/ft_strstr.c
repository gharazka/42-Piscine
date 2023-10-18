/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:13:58 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/12 14:39:20 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
			{
				return (&str[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*to_find;
	char	*str;
	
	str = "asd piscine Benguerir Khouribga abcd";
	to_find = "";
	printf("%s\n", ft_strstr(str, to_find));
}
*/
