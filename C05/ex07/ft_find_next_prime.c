#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (2);
	}
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(0));
	printf("%i\n", ft_find_next_prime(1));
	printf("%i\n", ft_find_next_prime(-20));
	printf("%i\n", ft_find_next_prime(51));
	printf("%i\n", ft_find_next_prime(15485833));
}*/
