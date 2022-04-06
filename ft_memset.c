#include "libft.h"

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
	int s[5] = {49, 49, 49, 49, 49};
	// char s[5] = {48, 48, 48, 48, 48};
	int i = 0;

	printf("\n-----------Vetor original-----------\n\n%p\n", s);
	while (i < 5)
	{
		printf("%c\n", s[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor após função ft------------\n\n%p\n", ft_memset(s, 120, 2));
	while (i < 5)
	{
		printf("%c\n", s[i]);
		i++;
	}
	// printf("\n-----------Vetor original-----------\n\n%p\n", s);
	// while (i < 5)
	// {
	// 	printf("%c\n", s[i]);
	// 	i++;
	// }
	// i = 0;
	// printf("\n-----------Vetor após função original------------\n\n%p\n", memset(s, 120, 2));
	// while (i < 5)
	// {
	// 	printf("%c\n", s[i]);
	// 	i++;
	// }
}
