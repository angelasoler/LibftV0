#include <stdio.h>
#include "../libft"

char	*ft_substr(char *s,unsigned int start, unsigned int len)
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

	printf("%s\n", ft_substr(s, 7, 50));
	// printf("\n%d\n", substr(s, 5, 50));
	// it's returning an int and also this funtion is kinf of a strncpy
}
