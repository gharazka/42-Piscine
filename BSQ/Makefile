SOURCES = *.c

FLAGS = -Wall -Wextra -Werror

NAME = BSQ

$NAME:
	cc $(FLAGS) $(SOURCES) -o $(NAME)

noflags:
	cc $(SOURCES) -o $(NAME)

clean: BSQ
	rm BSQ

out: BSQ
	./BSQ
