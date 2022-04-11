/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:50:46 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 02:06:41 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;
	x = malloc(sizeof(size) * nmemb);
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
	while (size != 0)
	{
		size--;
		printf("%p\n", ft);
		printf("%d\n\n", *ft);
		ft++;
	}
	size = nmemb;
	printf("    ======original=====\n%p\n", orig);
	while (size != 0)
	{
		size--;
		printf("%p\n", orig);
		printf("%d\n\n", *orig);
		orig++;
	}
}