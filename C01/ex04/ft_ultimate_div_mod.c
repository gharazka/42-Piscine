//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap_a;
	int	swap_b;

	swap_a = *a;
	swap_b = *b;
	*a = swap_a / swap_b;
	*b = swap_a % swap_b;
}

/*
int     main(void)
{
        int     num1;
        int     num2;
	int	*ptr1;
	int	*ptr2;

	num1 = 20;
	num2 = 3;
	ptr1 = &num1;
	ptr2 = &num2;
        ft_ultimate_div_mod(ptr1, ptr2);
        printf("%d and %d", *ptr1, *ptr2);
}
*/
