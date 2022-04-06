#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char s[] = "bla bla bla bla";
	printf("%ld\n", ft_strlen(s));
	printf("%ld\n", strlen(s));
}
