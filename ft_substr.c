#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char *result;
	int i;

	i = 0;
	result = malloc(len * sizeof(char));
	while (start < len || s[start] != '\0')
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[start] = '\0';
	return (result);
}

int	main()
{
	char s[] = "lets take string from 5 position";

	printf("\n%s\n", ft_substr(s, 5, 2048));
	// printf("\n%s\n", substr(s, 5, 50));
}
