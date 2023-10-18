CFLAGS = -Wall -Wextra -Werror -c

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADER = includes

OBJECTS = ${SOURCES:.c=.o}

NAME = libft.a


all: ${NAME}

.c.o:
	cc $(CFLAGS) $< -o ${<:.c=.o} -I $(HEADER)

${NAME}: $(OBJECTS)

	ar rcs ${NAME} $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f ${NAME}

re: fclean all
