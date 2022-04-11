/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:50:46 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 15:19:43 by asoler           ###   ########.fr       */
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
	int nmemb = 1;
	int size = sizeof(long long int);
	int *ft = ft_calloc(nmemb, size);
	int *orig = calloc(nmemb, size);

	printf("    ======ft=====\n%p\n", ft);
	printf("%zd\n\n", sizeof(*ft));
	printf("    ======original=====\n%p\n", orig);
	printf("%zd\n\n", sizeof(*orig));
}