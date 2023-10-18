//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[6];
	unsigned int n;

	src = "Hello";
	n = 7;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}
*/
