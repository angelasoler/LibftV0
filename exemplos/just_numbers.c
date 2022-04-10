char	*just_numbers(const char *nptr)
{
	int i = 0;
	char *s;

	s = (char *) nptr;
	while (s[i] >= '0' && s[i] <= '9')
	{
		i++;
	}
	s[i] = '\0';
	return (s);
}

#include <stdio.h>
int	main()
{
	char	n[] = "51655sdfsf";
	printf("    =====ft=====\n%s\n", just_numbers(n));
}