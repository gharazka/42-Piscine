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
