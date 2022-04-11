#include <stdio.h>

int	main()
{
	int	n = -452132;
	int	i = 0;
	int	signal = 0;

	if (n < 0)
	{
		n *= -1;
		signal = 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (signal)
		i++;
	printf("%d\n", i);
}