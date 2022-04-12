/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:41:57 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 22:21:22 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * size);
	while (*s)
	{
		dup[i] = *s;
		i++;
		s++;
	}
	dup[i] = *s;
	return (dup);
}
