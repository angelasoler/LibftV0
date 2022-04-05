char	*ft_memset(char *s, int c, int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char s[] = "bla bla bla bla";

	
	printf("%s\n", s);
	printf("\n%s\n", ft_memset(s, 'x', 30));
	printf("\n%s\n", s);
	printf("\n%p\n", s);
	printf("\n%p\n", ft_memset(s, 'x', 30));
	printf("\n%p\n", s);
	
	// printf("%s\n", s);
	// printf("\n%s\n", (unsigned char *)memset(s, 'x', 30));
	// printf("\n%s\n", s);
	// printf("\n%p\n", s);
	// printf("\n%p\n", memset(s, 'x', 30));
	// printf("\n%p\n", s);
}
