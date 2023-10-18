/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:44:23 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/28 16:10:10 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_simple(int nb)
{
	int	write_nb;

	write_nb = nb / 10 + '0';
	write(1, &write_nb, 1);
	write_nb = nb % 10 + '0';
	write(1, &write_nb, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putnbr_simple(i);
			write(1, " ", 1);
			ft_putnbr_simple(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
	if (!(i == 99 && j == 100))
		write(1, "\n", 1);
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
