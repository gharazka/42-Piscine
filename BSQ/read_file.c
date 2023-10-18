#include "ft_func.h"

char	*file_to_str(char *file_name)
{
	char	*file_str;
	int	fd;
	int	sz;
	file_str = (char *)malloc(sizeof(char) * 100000);
	fd = open(file_name, O_RDONLY);
	sz = read(fd, file_str, 100000);
	file_str[sz] = 0;
	close(fd);
	return (file_str);
}


int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != 0)
	{
		result += str[i] - '0';
		result *= 10;
		i++;
	}
	result /= 10;
	free(str);
	return (result);
}

int	get_map_width(char *file_str, int i)
{
	int	j;
	
	j = 0;
	i++;
	while (file_str[i] != '\n')
	{
		i++;
		j++;
	}
	return (j);
}

char	**get_map(char *file_str, int i, int map_length)
{
	int	count;
	int	j;
	char	**map_arr;

	count = 0;
	map_arr = (char **)malloc(sizeof(char *) * map_length + 1);
	while (count < map_length)
	{
		map_arr[count] = (char *)malloc(sizeof(char) * (get_map_width(file_str, i) + 1));
		j = 0;
		if (file_str[i] != '\n' && file_str[i] != 0)
		{
			while (file_str[i] != '\n' && file_str[i] != 0)
			{
				map_arr[count][j] = file_str[i];
				j++;
				i++;
			}
			count++;
		}
		else
			i++;
	}
	return (map_arr);
}

char	*get_map_length(char *file_str)
{
	int	i;
	char	*map_length;

	i = 0;
	while(file_str[i + 4] != '\n')
	{
		i++;
	}
	map_length = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while(file_str[i + 4] != '\n')
	{
		map_length[i] = file_str[i];
		i++;
	}
	map_length[i] = 0;
	return (map_length);
}

t_map	get_map_struct(char *file_str)
{
	int	i;
	t_map	map;

	i = 0;
	while (file_str[i] != '\n')
	{
		i++;
	}
	map.full = file_str[i - 1];
	map.obstacle = file_str[i - 2];
	map.empty = file_str[i - 3];
	map.length = ft_atoi(get_map_length(file_str));
	map.width = get_map_width(file_str, i);
	map.arr = get_map(file_str, i, map.length);
	return (map);
}
