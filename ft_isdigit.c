int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("Z is ft_alpha: %d\n", ft_isdigit('5'));
	printf("Z is alpha: %d\n", isdigit('5'));
	printf("* is ft_alpha: %d\n", ft_isdigit('*'));
	printf("* is alpha: %d\n", isdigit('*'));
}
