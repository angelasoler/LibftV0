all: libft.h
	gcc -Wall -Werror -Wextra ft_isalnum.c ft_isdigit.c ft_isalpha.c
re:
	rm a.out
	make