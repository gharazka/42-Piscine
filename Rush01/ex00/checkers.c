/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:59:45 by aevstign          #+#    #+#             */
/*   Updated: 2023/09/17 20:55:42 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up_col_checker(int grid[4][4], int pos, int clues[16])
{
	int	i;
	int	max_height;
	int	visible_towers;

	i = 0;
	max_height = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (grid[i][pos % 4] > max_height)
			{
				max_height = grid[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (clues[pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	down_col_checker(int grid[4][4], int pos, int clues[16])
{
	int	i;
	int	max_height;
	int	visible_towers;

	i = 3;
	max_height = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (grid[i][pos % 4] > max_height)
			{
				max_height = grid[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (clues[4 + pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	left_row_checker(int grid[4][4], int pos, int clues[16])
{
	int	i;
	int	max_height;
	int	visible_towers;

	i = 0;
	max_height = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (grid[pos / 4][i] > max_height)
			{
				max_height = grid[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (clues[8 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	right_row_checker(int grid[4][4], int pos, int clues[16])
{
	int	i;
	int	max_height;
	int	visible_towers;

	i = 3;
	max_height = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (grid[pos / 4][i] > max_height)
			{
				max_height = grid[pos / 4][i];
				visible_towers++;
			}
			i--;
		}
		if (clues[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	grid_checker(int grid[4][4], int pos, int clues[16])
{
	if (up_col_checker(grid, pos, clues) == 1)
		return (1);
	if (down_col_checker(grid, pos, clues) == 1)
		return (1);
	if (left_row_checker(grid, pos, clues) == 1)
		return (1);
	if (right_row_checker(grid, pos, clues) == 1)
		return (1);
	return (0);
}
