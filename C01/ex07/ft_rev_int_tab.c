#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
