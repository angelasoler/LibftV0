/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:05:30 by asoler            #+#    #+#             */
/*   Updated: 2022/04/10 18:47:00 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			result = i;
		}
		s++;
		i++;
	}
	if (result == 0)
		return ((char *)0);
	else
	{
		i -= result;
		return ((char *)s - i);
	}
}

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == '\0')
		return ((char *)0);
	else
		return ((char *)s);
}

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

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n != 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

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

#include <stdio.h>
#include <string.h>
int	main()
{
	char	big[] = "where is null";
	char	little[] = "here";
	int		len = 2;

	// printf("    ======original without len======\n%s\n", strstr(big, little));
	printf("    ======ft======\n%s\n", ft_strnstr(big, little, len));
}