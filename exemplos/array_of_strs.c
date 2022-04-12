#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	char **result;
	int	i =0;

	result = malloc(sizeof(char *)*5);
	while (i < 5)
	{
		result[i] = malloc(sizeof(char *) * 12);
		result[i] = strdup("hello there");
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
}
