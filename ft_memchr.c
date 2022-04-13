/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:24:23 by asoler            #+#    #+#             */
/*   Updated: 2022/04/13 03:00:07 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	a;

	a = (unsigned char)c;
	if (n == 0)
		return ((unsigned char *) 0);
	aux = (unsigned char *)s;
	while (*aux != a)
	{
		aux++;
		n--;
		if (*aux == '\0')
			return ((unsigned char *) 0);
	}
	if (*aux != a)
		return ((unsigned char *) 0);
	else
		return (aux);
}
