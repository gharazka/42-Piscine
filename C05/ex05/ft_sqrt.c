#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb / i >= i)
	{
		if (nb / i == i && nb % i == 0)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(529984));
	printf("%i\n", ft_sqrt(-1));
	printf("%i\n", ft_sqrt(79));
}*/
