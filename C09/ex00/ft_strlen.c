//#include <unistd.h>

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

/*
int     main(void)
{
        char *str = "HelloHelloHelloHelloHelloHelloHello";
	int strlen = ft_strlen(str);
        write(1, &strlen, 1);
}
*/
