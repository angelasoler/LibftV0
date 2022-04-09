/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:24:23 by asoler            #+#    #+#             */
/*   Updated: 2022/04/09 20:36:46 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *aux;

	if (n == 0)
		return ((char *) 0);
	aux = (char *)s;
	while (*aux != c)
	{
		if (*aux == '\0')
			return ((char *) 0);
		aux++;
		n--;
	}
	if (*aux == c)
		return (aux);
	else
		return ((char *) 0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	const char s[] = "hey there, looking for the first byte with t";
	int n = 0;

	printf("    =======pointer adress======\n%p\n", s);
	printf("\n    =======ft======\n%p\n", ft_memchr(s, 'h', n));
	printf("\n    =======orig======\n%p\n", memchr(s, 'h', n));
	printf("\n    =======diferenc pointer adress ft x orig======\n%ld\n", \
	(ft_memchr(s, 'x', 50) - memchr(s, 'x', n)));
}