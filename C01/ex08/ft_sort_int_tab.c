void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = -1;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {4, 3, 5, 2, 1};
	ft_sort_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%i", tab[i]);
	}
}*/
