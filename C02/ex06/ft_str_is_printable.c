//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (31 > str[i])
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

	str = "\n ";
	printf("%d\n", ft_str_is_printable(str));
}
*/
