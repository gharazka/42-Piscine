/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:58:26 by sdubey            #+#    #+#             */
/*   Updated: 2023/09/17 20:43:31 by sdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_error(void)
{
	write(1, "Error\n", 6);
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

int	check_for_errors(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 16 + 15)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] != 32 && !(str[i] >= '1' && str[i] <= '4'))
		{
			return (1);
		}
		if (str[i] == 32 && str[i + 1] == 32)
		{
			return (1);
		}
		if ((str[i] >= '1' && str[i] <= '4')
			&& (str[i + 1] >= '1' && str[i + 1] <= '4'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
