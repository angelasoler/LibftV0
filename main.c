#include "libft.h"
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "this string is going to be dupplicated";
	char *dup = strdup(str);
	char *ftdup = ft_strdup(str);

	printf("Original Funtion: %s\n\n", dup);
	printf("Original String: %s\n\n", str);
	printf("FT Funtion: %s\n\n", ftdup);
}