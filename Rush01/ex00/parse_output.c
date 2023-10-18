/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:30:00 by aevstign          #+#    #+#             */
/*   Updated: 2023/09/17 20:32:23 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_itoa(int i)
{
	return (i + '0');
}

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	combine_output(char str[16], int grid[4][4], int pos)
{
	while (grid[pos / 4][pos % 4])
	{
		str[pos] = ft_itoa(grid[pos / 4][pos % 4]);
		pos++;
	}
}

void	print_output(char output[16])
{
	int	i;

	i = 0;
	while (i != 16)
	{
		ft_putchar(output[i]);
		if (i % 4 == 3)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
