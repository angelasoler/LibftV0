/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:26:52 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 20:43:33 by asoler           ###   ########.fr       */
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(size * sizeof(char));
	i = 0;
	while(*s1)
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while(*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = *s2;
	return (result);
}

#include <stdio.h>
int	main()
{
	char *s;
	char *s1;

	s = "concatenate this string ";
	s1 = "with this string";
	printf("%s\n", ft_strjoin(s, s1));
}
