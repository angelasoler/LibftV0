/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:17:45 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 20:44:05 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	unsigned int	i;
	int len;

	i = 0;
	len = ft_strlen(dest);
	while (i < count)
	{
		if (src[i] == '\0')
		{
			dest[len] = src[i];
			return (0);
		}
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len - 1] = '\0';
	return (0);
}

#include <stdio.h>
int	main()
{
	// char	dest[100];
	char	ft_dest[] = "hello world";
	char	src[] = "lcat has always null byte at the end";

	ft_strlcat(ft_dest, src, 25);
	printf("\n-----------Vetor após função ft------------\n\n%p\n%s\n", ft_dest, ft_dest);
	// strlcpy(dest, src, 25);
	// printf("\n-----------Vetor original-----------\n\n%p\n%s", dest, dest);
}