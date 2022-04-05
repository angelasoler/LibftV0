int	ft_strlen(char *str)
{
	int	i;

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
	printf("%d\n", ft_strlen(s));
	printf("%ld\n", strlen(s));
}
