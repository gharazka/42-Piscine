/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:18:29 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/07 14:45:54 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div_val;
	int	mod_val;
	int	*div;
	int	*mod;

	a = 10;
	b = 3;
	div = &div_val;
	mod = &mod_val;
	ft_div_mod(a, b, div, mod);
	printf("%d and %d", *div, *mod);
}
*/
