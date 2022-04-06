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
		// s1++;
		i++;
	}
	return ((void *)s1);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	int ftx[5] = {49, 49, 49, 49, 49};
	// char fts[5] = {48, 48, 48, 48, 48};
	// char s[5] = {48, 48, 48, 48, 48};
	int x[5] = {49, 49, 49, 49, 49};
	int i = 0;

	printf("\n-----------Vetor original-----------\n\n%p\n", ftx);
	while (i < 5)
	{
		printf("%d\n", ftx[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor após função ft------------\n\n%p\n", ft_memset(ftx, 120, 8));
	while (i < 5)
	{
		printf("%d\n", ftx[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor original-----------\n\n%p\n", x);
	while (i < 5)
	{
		printf("%d\n", x[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor após função original------------\n\n%p\n", memset(x, 120, 8));
	while (i < 5)
	{
		printf("%d\n", x[i]);
		i++;
	}
}
