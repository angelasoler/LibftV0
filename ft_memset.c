#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = (char *) s;
	while(i < n)
	{
		s1[i] = c;
		i++;
	}
	return ((void *)s1);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	int s[5] = {5, 5, 5, 5, 5};
	int i = 0;

	printf("%p\n", s);
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	i = 0;
	printf("\n%p\n", ft_memset(s, 'x', 12));
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
}
