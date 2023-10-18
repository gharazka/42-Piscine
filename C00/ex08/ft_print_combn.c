/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:11:01 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/28 18:24:48 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 1;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_numlen(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, int n)
{
	int		size;
	char	num_to_write[11];

	size = n + 1;
	num_to_write[size] = 0;
	while (nb != 0)
	{
		size--;
		num_to_write[size] = (nb % 10) + '0';
		nb /= 10;
	}
	while (size != 1)
	{
		size--;
		num_to_write[size] = '0';
	}
	ft_putstr(num_to_write);
}

int	check_for_same(int i)
{
	while (i != 0)
	{
		if ((i / 10) % 10 >= i % 10)
		{
			return (0);
		}
		i /= 10;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 1;
	while (n - 1 > ft_numlen(i))
		i++;
	while (n >= ft_numlen(i) && i < 123456790)
	{
		if (check_for_same(i) && i % 10 >= n)
			ft_putstr(" , ");
		if (check_for_same(i))
			ft_putnbr(i, n);
		i++;
	}
	ft_putstr("\n");
}
/*
int	main(void)
{
	ft_print_combn(6);
}*/
