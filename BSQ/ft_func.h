#ifndef FT_FUNC_H
# define FT_FUNC_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> //to delete at the end//

typedef struct	map_info 
{
	char	full;
	char	empty;
	char	obstacle;
	int	length;
	int	width;
	char	**arr;
} t_map;


void	helper(t_map map, int size);
char	*file_to_str(char *file_name);
t_map	get_map_struct(char *file_str);
void	ft_putnbr(int nb);

#endif
