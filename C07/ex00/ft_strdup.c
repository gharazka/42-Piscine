#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	dest = (char *)malloc(size);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	printf("%s", ft_strdup("Hello"));
}*/
