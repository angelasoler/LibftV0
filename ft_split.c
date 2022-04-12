/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:44:10 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 20:43:30 by asoler           ###   ########.fr       */
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

int	count_words(char const *s, char c)
{
	int wc;

	s++;
	wc = 1;
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

	s1 = (char *)s;
	size = count_words(s, c);
	result = malloc(sizeof(char *) * size);
	end = s1;
	i = 0;
	while (*s1)
	{
		beg = end++;
		while (*s1 != c)
		{
			s1++;
			i++;
		}
		end = s1;
		s1 = '\0';
		ft_strlen(beg);
		result[i] = malloc(sizeof(char *) * (ft_strlen(beg) + 1));
		result[i] = ft_strdup(beg);
		i++;
		s1++;
	}
	return (result);
}

#include <stdio.h>
int	main()
{
	char	**frase_into_words = ft_split("hello there general kenobi", ' ');
	char	**frase_cutting_es = ft_split("hello there general kenobi", 'e');
	int		i = 0;

	while (frase_into_words[i] != NULL)
	{
		printf("%s\n\n", frase_into_words[i]);
		i++;
	}
	while (frase_cutting_es[i] != NULL)
	{
		printf("%s\n\n", frase_cutting_es[i]);
		i++;
	}
}
