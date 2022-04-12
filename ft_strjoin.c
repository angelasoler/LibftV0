/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:26:52 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 22:21:49 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
