/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:09:17 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/10 16:47:41 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	make_width(int width, char start, char middle, char end)
{
	int	i;
	int	sides;

	i = 0;
	sides = 2;
	ft_putchar(start);
	while (i < (width - sides))
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	make_length(int width, int length, char middle)
{
	int	i;
	int	j;
	int	sides;

	i = 0;
	sides = 2;
	while (i < (length - sides))
	{
		j = 0;
		ft_putchar(middle);
		while (j < (width - sides))
		{
			ft_putchar(' ');
			j++;
		}
		if (width > 1)
		{
			ft_putchar(middle);
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int width, int length)
{
	if (width <= 0 || length <= 0)
	{
		return ;
	}
	make_width(width, 'A', 'B', 'A');
	make_length(width, length, 'B');
	if (length > 1)
	{
		make_width(width, 'C', 'B', 'C');
	}
}
