/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:20:09 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 21:15:31 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			return (0);
		}
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
int	main()
{
	// char	dest[100];
	char	ft_dest[100];
	char	src[] = "lcpy has always null byte at the end";

	ft_strlcpy(ft_dest, src, 25);
	printf("\n-----------Vetor após função ft------------\n\n%p\n%s\n", ft_dest, ft_dest);
	// strlcpy(dest, src, 25);
	// printf("\n-----------Vetor original-----------\n\n%p\n%s", dest, dest);
}
