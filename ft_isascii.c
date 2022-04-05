int	ft_isascii(int c)
{
	
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("g is ft_isascii: %d\n", ft_isalnum('g'));
	printf("g is isascii: %d\n", isalnum('g'));
	printf("á is ft_isascii: %d\n", ft_isalnum('á'));
	printf("á is isascii: %d\n", isalnum('á'));
}
