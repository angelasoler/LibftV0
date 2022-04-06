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
	return (s);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	long int ftx[5] = {49, 49, 49, 49, 49};
	// char fts[5] = {48, 48, 48, 48, 48};
	// char s[5] = {48, 48, 48, 48, 48};
	long int x[5] = {49, 49, 49, 49, 49};
	int i = 0;

	printf("\n-----------Vetor original-----------\n\n%p\n", ftx);
	while (i < 5)
	{
		printf("%ld\n", ftx[i]);
		i++;
	}
	i = 0;
	ft_memset(ftx, 120, 8);
	printf("\n-----------Vetor após função ft------------\n\n%p\n", ftx);
	while (i < 5)
	{
		printf("%ld\n", ftx[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor original-----------\n\n%p\n", x);
	while (i < 5)
	{
		printf("%ld\n", x[i]);
		i++;
	}
	i = 0;
	memset(x, 120, 8);
	printf("\n-----------Vetor após função original------------\n\n%p\n", x);
	while (i < 5)
	{
		printf("%ld\n", x[i]);
		i++;
	}
}
