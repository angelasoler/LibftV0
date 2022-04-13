/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:44:10 by asoler            #+#    #+#             */
/*   Updated: 2022/04/13 16:25:52 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	wc;

	s++;
	wc = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s != '\0')
				wc++;
		}
		s++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*s1;
	char	*beg;
	char	*end;
	int		i;
	int		size;

	if (s == 0 && c == 0)
	{
		result = malloc(sizeof(char *) * 1);
		result[0] = (char *)0;
		return (result);
	}
	s1 = ft_strdup(s);
	size = count_words(s, c);
	result = malloc(sizeof(char *) * size);
	i = 0;
	while (*s1 == c)
		s1++;
	end = s1;
	while (*s1)
	{
		beg = end;
		while (*s1 != c && *s1 != '\0')
			s1++;
		*s1 = '\0';
		s1++;
		end = s1;
		result[i] = malloc(sizeof(char *) * (ft_strlen(beg) + 1));
		result[i] = ft_strdup(beg);
		while (*end == c && *s1 != '\0')
		{
			end++;
			s1++;
		}
		i++;
	}
	result[i] = (char *)0;
	return (result);
}
