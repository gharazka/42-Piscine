#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int n;

	s1 = "Helmo";
	s2 = "Hel1a";
	n = 6;
	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i", strncmp(s1, s2, n));
}
*/
