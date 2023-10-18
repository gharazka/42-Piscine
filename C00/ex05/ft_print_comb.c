#include <unistd.h>

void	ft_write_nums(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_write_nums(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
void	main(void)
{
	ft_print_comb();
}
*/
