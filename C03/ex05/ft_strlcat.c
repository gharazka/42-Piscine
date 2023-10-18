#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	while (j < size)
	{
		dest[i + j] = 0;
		j++;
	}
	dest[i + j] = 0;
	return (i + j);
}
/*
int	main(void)
{
	char	dest[12] = "Hello ";
	char	*src;
	unsigned int	nb;

	src = "World";
	nb = 5;
	printf("%i, %s\n", ft_strlcat(dest, src, nb), dest);
}
*/
