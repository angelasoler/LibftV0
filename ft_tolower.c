int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char ft = 'A';
	char org = '/';

	printf("          -----ft-----\n%c\n\n", ft_tolower(ft));
	printf("      ---------original-----\n%c\n\n", tolower(org));
	printf("      ---------original-----\n%c\n\n", tolower(ft));
	printf("          -----ft-----\n%c\n\n", ft_tolower(org));
}
