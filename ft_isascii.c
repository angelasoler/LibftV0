int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("g is ft_isascii: %d\n", ft_isascii('g'));
	printf("g is isascii: %d\n", isascii('g'));
	printf("[DELETE] is ft_isascii: %d\n", ft_isascii(127));
	printf("[DELETE] is isascii: %d\n", isascii(127));
}
