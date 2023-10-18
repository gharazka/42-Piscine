//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("%d and %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d and %d", a, b);
}
*/
