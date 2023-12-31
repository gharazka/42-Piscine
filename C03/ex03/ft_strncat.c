#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < nb)
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
	char	dest[12] = "HelloWo";
	char	*src;
	unsigned int	nb;

	src = "World";
	nb = 0;
	printf("%s\n", ft_strncat(dest, src, nb));
}
*/
