/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:32:37 by aevstign          #+#    #+#             */
/*   Updated: 2023/09/17 20:57:54 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char c)
{
	return (c - '0');
}

void	split_input(char *str, int *clue)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (str[i] != 32)
		{
			clue[j] = ft_atoi(str[i]);
			j++;
		}
		i++;
	}
}

void	fill_with_zeros(int grid[4][4], int pos)
{
	while (pos < 16)
	{
		grid[pos / 4][pos % 4] = 0;
		pos++;
	}
}
