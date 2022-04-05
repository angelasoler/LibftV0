int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("Z is ft_alpha: %d\n", ft_isalpha('Z'));
	printf("Z is alpha: %d\n", isalpha('Z'));
	printf("* is ft_alpha: %d\n", ft_isalpha('*'));
	printf("* is alpha: %d\n", isalpha('*'));
}
