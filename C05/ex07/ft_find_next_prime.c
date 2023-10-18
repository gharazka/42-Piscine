/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:31:20 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/14 13:31:21 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (2);
	}
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(0));
	printf("%i\n", ft_find_next_prime(1));
	printf("%i\n", ft_find_next_prime(-20));
	printf("%i\n", ft_find_next_prime(51));
	printf("%i\n", ft_find_next_prime(15485833));
}*/
