#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("g is ft_alpha: %d\n", ft_isalnum('g'));
	printf("g is alpha: %d\n", isalnum('g'));
	printf(", is ft_alpha: %d\n", ft_isalnum(','));
	printf(", is alpha: %d\n", isalnum(','));
}
