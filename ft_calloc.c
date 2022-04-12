/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:50:46 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 21:42:56 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*result;

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
