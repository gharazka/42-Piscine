#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	result = 1;
	while (i < nb)
	{
		i++;
		result *= i;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_factorial(500));
}
*/
