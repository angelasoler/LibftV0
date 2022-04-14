/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:17:45 by asoler            #+#    #+#             */
/*   Updated: 2022/04/14 15:14:51 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= 0)
		return (ft_strlen(src));
	else if (size < dest_len)
		return (ft_strlen(src) + size);
	if (*dest)
	{
		while (*dest && size != 0)
		{
			dest++;
			size--;
		}
		while(size > 1)
		{
			*dest = *src;
			size--;
			src++;
			dest++;
		}
		*dest = '\0';	
	}
	return (src_len + dest_len);
}
