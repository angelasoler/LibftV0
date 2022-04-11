static int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}

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
