/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:38:14 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/18 19:03:47 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		return (0);
	}
	i = 0;
	arr = (int *)malloc((max - min) * 4);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%i, ", ft_range(0, 10)[i]);
	}
}
*/
