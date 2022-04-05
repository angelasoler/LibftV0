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

