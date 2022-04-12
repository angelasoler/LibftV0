/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:50:16 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 15:20:05 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s) + 1;
	result = malloc(sizeof(char) * len);
	while (*s)
	{
		result[i] = f(i, *s);
		i++;
		s++;
	}
	result[i] = *s;
	return (result);
}

char	ft(unsigned int x, char c)
{
	c += x;
	return (c);
}

#include <stdio.h>

int	main()
{
	char	s[] = "abc";

	printf("   ====Result of ft=====\n%s\n", ft_strmapi(s, ft));
	printf("   ====Original string=====\n%s\n", s);
}
