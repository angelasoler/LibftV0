/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:24:25 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 21:40:42 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chr_cmp(const char	*s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (0);
		else
			s++;
	}
	return (1);
}

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

static char	*ft_strdup(const char *s)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		mark;
	char	*result;

	mark = 0;
	i = 0;
	while (mark != 1)
	{
		mark = chr_cmp(set, s1[i]);
		i++;
	}
	result = ft_strdup(&s1[i - 1]);
	i = ft_strlen(result) - 1 ;
	mark = 0;
	while (mark != 1)
	{
		mark = chr_cmp(set, result[i]);
		i--;
	}
	result[i + 2] = '\0';
	return (result);
}
