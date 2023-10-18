/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:22:34 by aevstign          #+#    #+#             */
/*   Updated: 2023/09/17 20:28:07 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	grid_checker(int grid[4][4], int pos, int clues[16]);

int	is_double(int grid[4][4], int pos, int height)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (grid[i][pos % 4] == height)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (grid[pos / 4][i] == height)
			return (1);
		i++;
	}
	return (0);
}

int	solve(int grid[4][4], int clues[16], int pos)
{
	int	tower_height;

	if (pos == 16)
		return (1);
	tower_height = 0;
	while (tower_height < 4)
	{
		tower_height++;
		if (is_double(grid, pos, tower_height) == 0)
		{
			grid[pos / 4][pos % 4] = tower_height;
			if (grid_checker(grid, pos, clues) == 0)
			{
				if (solve(grid, clues, pos + 1) == 1)
					return (1);
			}
			else
				grid[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}
