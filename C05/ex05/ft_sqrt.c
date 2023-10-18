/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:30:24 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/14 13:30:25 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb / i >= i)
	{
		if (nb / i == i && nb % i == 0)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(529984));
	printf("%i\n", ft_sqrt(-1));
	printf("%i\n", ft_sqrt(79));
}*/
