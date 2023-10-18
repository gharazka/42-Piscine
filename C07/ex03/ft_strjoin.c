#include <stdlib.h>
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	full_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*full;
	int		len;

	len = full_len(size, strs, sep);
	full = (char *)malloc(len + 1);
	full[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(full, strs[i]);
		i++;
		if (i < size)
		{
			ft_strcat(full, sep);
		}
	}
	full[len + 1] = 0;
	return (full);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "World", "!"};
	char	*sep = ", ";
	printf("%s", ft_strjoin(0, strs, sep));
}*/
