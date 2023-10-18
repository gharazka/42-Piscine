#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_is_prime(2));
	printf("%i\n", ft_is_prime(3));
	printf("%i\n", ft_is_prime(4));
	printf("%i\n", ft_is_prime(17));
	printf("%i\n", ft_is_prime(27));
}*/
