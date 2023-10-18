/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:48:21 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/18 20:07:56 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*pt;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	pt = (int *)malloc(len * 4);
	*range = pt;
	i = 0;
	while (min < max)
	{
		pt[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int	*range;
	int	f;
	f = ft_ultimate_range(&range, 0, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%i", range[i]);
	}
}*/
