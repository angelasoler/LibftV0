/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:24:25 by asoler            #+#    #+#             */
/*   Updated: 2022/04/14 23:21:48 by asoler           ###   ########.fr       */
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
	if (!result)
		return (NULL);
	i = ft_strlen(result) - 1;
	mark = 0;
	while (mark != 1)
	{
		mark = chr_cmp(set, result[i]);
		i--;
	}
	result[i + 2] = '\0';
	return (result);
}
