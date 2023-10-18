/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:13:58 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/12 18:11:16 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "Hello";
	s2 = "Haaaa";
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i", strcmp(s1, s2));
}
*/
