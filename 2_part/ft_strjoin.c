/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:00:38 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 15:03:37 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(size * sizeof(char));
	i = 0;
	while (*s1)
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = *s2;
	return (result);
}
