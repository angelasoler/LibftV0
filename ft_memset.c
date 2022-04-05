void	*ft_memset(void *s, int c, int n)
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
	int s[5] = {5, 5, 5, 5, 5};
	int i = 0;

	printf("%p\n", s);
	// printf("\n%s\n", ft_memset(s, 'x', 30));
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	i = 0;
	// printf("\n%s\n", s);
	// printf("\n%p\n", s);
	printf("\n%p\n", ft_memset(s, 'x', 2));
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	// printf("\n%p\n", s);
	
	// printf("%p\n", s);
	// while (i < 5)
	// {
	// 	printf("%d\n", s[i]);
	// 	i++;
	// }
	// i = 0;
	// printf("\n%p\n", memset(s, 'x', 2));
	// while (i < 5)
	// {
	// 	printf("%d\n", s[i]);
	// 	// s++;
	// 	i++;
	// }

	// printf("\n%s\n", s);
	// printf("\n%p\n", s);
	// printf("\n%p\n", memset(s, 'x', 2));
	// printf("\n%p\n", s);
}
