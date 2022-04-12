/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:24:23 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 21:37:14 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*aux;

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
