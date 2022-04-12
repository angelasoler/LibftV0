/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:05:30 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 22:23:10 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptrr;
	char	*ptr;
	int		size;

	ptrr = ft_strrchr(big, little[0]);
	ptr = ft_strchr(big, little[0]);
	size = ft_strlen(little);
	if (size == 0)
		return ((char *)big);
	else if (ptr == NULL)
		return ((char *)0);
	else
	{
		while (ptr != ptrr)
		{
			if (ft_strncmp(ptr, little, len) != 0)
				ptr = ft_strchr(ptr++, little[0]);
			else
				return ((char *)ptr);
		}
		if (ft_strncmp(ptr, little, size) != 0)
			return ((char *)0);
		else
			return ((char *)ptr);
	}
}
