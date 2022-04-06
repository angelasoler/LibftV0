/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:20:13 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 16:43:26 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
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

#include <stdio.h>
#include <string.h>
int	main()
{
	int ftx[5] = {49, 49, 49, 49, 49};
	char fts[5] = {48, 48, 48, 48, 48};
	char s[5] = {48, 48, 48, 48, 48};
	int x[5] = {49, 49, 49, 49, 49};
	int i = 0;

	printf("\n-----------Vetor original int-----------\n\n%p\n", ftx);
	while (i < 5)
	{
		printf("%d\n", ftx[i]);
		i++;
	}
	i = 0;
	ft_bzero(ftx,8);
	printf("\n-----------Vetor após função ft int------------\n\n%p\n", ftx);
	while (i < 5)
	{
		printf("%d\n", ftx[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor original int-----------\n\n%p\n", x);
	while (i < 5)
	{
		printf("%d\n", x[i]);
		i++;
	}
	i = 0;
	bzero(x, 8);
	printf("\n-----------Vetor após função original int------------\n\n%p\n", x);
	while (i < 5)
	{
		printf("%d\n", x[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor original char-----------\n\n%p\n", fts);
	while (i < 5)
	{
		printf("%d\n", fts[i]);
		i++;
	}
	i = 0;
	ft_bzero(fts, 2);
	printf("\n-----------Vetor após função ft char------------\n\n%p\n", fts);
	while (i < 5)
	{
		printf("%d\n", fts[i]);
		i++;
	}
	i = 0;
	printf("\n-----------Vetor original char-----------\n\n%p\n", s);
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	i = 0;
	bzero(s, 2);
	printf("\n-----------Vetor após função original char------------\n\n%p\n", s);
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
}