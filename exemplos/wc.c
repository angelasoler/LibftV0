int	count_words(char *s, char c)
{
	int wc;

	s++;
	wc = 1;
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s != '\0')
				wc++;
		}
		s++;
	}
	return (wc);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", count_words("hello    world    and    bla    bla    bla! ", ' '));
	printf("%d\n", count_words("hello there general kenobi ex", 'e'));
}
