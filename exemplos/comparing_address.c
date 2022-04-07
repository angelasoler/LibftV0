#include <stdio.h>
int	main()
{
	
	char ft_dest[] = "abcde";

	printf("\n\n%ld\n\n", (&ft_dest[2] - &ft_dest[20]));
}