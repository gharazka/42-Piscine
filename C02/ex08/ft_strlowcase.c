//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	change;

	i = 0;
	change = 32;
	while (str[i] != '\0')
	{
		if ('a' < str[i] && str[i] < 'z')
		{
			str[i] += change;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[7] = "AZ";

	printf("%s\n", ft_strlowcase(str));
}
*/
