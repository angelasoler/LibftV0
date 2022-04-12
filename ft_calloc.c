/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:50:46 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 17:59:46 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned int i;
	char	*result;

	i = 0;
	result = (char *)s;
	while (i < n)
	{
		result[i] = 0;
		i++;
	}
	return ((void)result);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	x = malloc(sizeof(size) * nmemb);
	ft_bzero(x, nmemb);
	return (x);
}

#include <stdio.h>

int	main()
{
	int nmemb = 4;
	int size = 4;
	int *ft = ft_calloc(nmemb, size);
	int *orig = calloc(nmemb, size);

	printf("    ======ft=====\n%p\n", ft);
	printf("%zd\n\n", sizeof(*ft));
	while(size < 0)
	{
		size--;
		printf("%d\n", ft[size]);
	}
	printf("    ======original=====\n%p\n", orig);
	printf("%zd\n\n", sizeof(*orig));
	size = nmemb;
	while(size < 0)
	{
		size--;
		printf("%d\n", orig[size]);
	}
}