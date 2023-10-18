/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:07:16 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/20 15:59:05 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strings;
	int			i;

	strings = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		strings[i].size = ft_strlen(av[i]);
		strings[i].str = av[i];
		strings[i].copy = (char *)malloc(strings[i].size + 1);
		ft_strncpy(strings[i].copy, strings[i].str, strings[i].size + 1);
		i++;
	}
	strings[ac].str = 0;
	return (strings);
}

/*
int	main(void)
{
	char	*av[7] = {"Hello", "Dear", "Pisciner", "How", "Is", "Your", "Day"};
	t_stock_str *str = ft_strs_to_tab(7, av);
	ft_show_tab(str);
}*/
