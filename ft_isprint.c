int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}


#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("31 is ft_isprint: %d\n", ft_isprint(31));
	printf("31 is isprint: %d\n", isprint(31));
	printf("[DELETE] is ft_isprint: %d\n", ft_isprint(48));
	printf("[DELETE] is isprint: %d\n", isprint(48));
}

