/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:21:51 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/27 05:51:49 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"

int     main(void)
{
	t_map	map;
	char	*file_str;
	int	i;

	i = 0;
	file_str = file_to_str("map");
	map = get_map_struct(file_str);
        helper(map, map.length);
	free(file_str);
	while (map.arr[i])
	{
		free(map.arr[i]);
		i++;
	}
	free(map.arr);
}
