/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:13:58 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/12 18:29:52 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	while (j < size)
	{
		dest[i + j] = 0;
		j++;
	}
	dest[i + j] = 0;
	return (i + j);
}
/*
int	main(void)
{
	char	dest[12] = "Hello ";
	char	*src;
	unsigned int	nb;

	src = "World";
	nb = 5;
	printf("%i, %s\n", ft_strlcat(dest, src, nb), dest);
}
*/
