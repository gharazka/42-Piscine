#include <stdio.h>
#include <stdlib.h>

int	check_sign_and_start(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] < '0' || str[i] > '9') && str[i] != 0)
	{
		if (str[i] != '-' && str[i] != '+' && str[i] != ' ')
		{
			return (i * sign);
		}
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (i * sign);
}

int	check_errors(long int nb)
{
	if (nb > 2147483647)
	{
		return (214748364);
	}
	if (nb < -2147483648)
	{
		return (-214748364);
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long int	result;

	i = check_sign_and_start(str);
	result = 0;
	if (i < 0)
	{
		sign = -1;
		i *= -1;
	}
	else
	{
		sign = 1;
	}
	while (((str[i] >= '0' && str[i] <= '9') && str[i] != 0)
		|| (-2147483647 > result && result < 2147483647))
	{
		result += str[i] - '0';
		result *= 10;
		i++;
	}
	result /= 10 * sign;
	i = result;
	return (i);
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = ft_atoi("2147483647143");
	j = atoi("2147483647143");
	printf("%i\n%i\n", i, j);
}*/
