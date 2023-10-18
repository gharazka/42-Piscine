#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

/*
int	main(void)
{
	char	dest[10] = "Hello";
	char	*src;

	src = "World";
	printf("%s\n", ft_strcat(dest, src));
}
*/
