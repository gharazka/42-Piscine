//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((64 > str[i] || str[i] > 90) && (96 > str[i] || str[i] > 123))
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
	char	*str;

	str = "AZaz";
	printf("%d\n", ft_str_is_alpha(str));
}
*/
