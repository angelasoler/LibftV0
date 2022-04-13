/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:17:45 by asoler            #+#    #+#             */
/*   Updated: 2022/04/13 21:49:14 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	unsigned int	i;
	int				len;
	int				total_len;

	i = 0;
	if (count <= 0)
		len = 0;
	else
		len = ft_strlen(dest);
	total_len = ft_strlen(src) + len;
	if (count <= 0)
		return (total_len);
	while (i < count)
	{
		if (src[i] == '\0')
		{
			dest[len] = '\0';
			return (total_len);
		}
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len - 1] = '\0';
	return (total_len);
}
