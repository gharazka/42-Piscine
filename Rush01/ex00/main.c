#include <stdlib.h>

int		check_for_errors(char *str);
int		solve(int grid[4][4], int clues[16], int pos);
void	display_error(void);
void	split_input(char *str, int *clues);
void	combine_output(char str[16], int grid[4][4], int pos);
void	print_output(char output[16]);
void	fill_with_zeros(int grid[4][4], int pos);

int	main(int argc, char **argv)
{
	int		grid[4][4];
	int		*clue;
	char	output[16];

	if (argc != 2)
	{
		display_error();
		return (0);
	}
	if (check_for_errors(argv[1]))
	{
		display_error();
		return (0);
	}
	fill_with_zeros(grid, 0);
	clue = (int *)malloc(16 * 4);
	split_input(argv[1], clue);
	if (solve(grid, clue, 0) == 0)
	{
		display_error();
		return (0);
	}
	combine_output(output, grid, 0);
	print_output(output);
	free(clue);
}
