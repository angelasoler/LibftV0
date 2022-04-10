/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:41:57 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 01:48:05 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * size);
	while (*src)
	{
		dup[i] = *src;
		i++;
		src++;
	}
	dup[i] = *src;
	return (dup);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "this string is going to be dupplicated";
	char *dup = strdup(str);
	char *ftdup = ft_strdup(str);

	printf("     =====Original Funtion=====\n%s\n\n", dup);
	printf("     =====Original Funtion address=====\n%p\n\n", dup);
	printf("     =====Original String======\n%s\n\n", str);
	printf("     =====Original String address======\n%p\n\n", str);
	printf("     ====FT Funtion======\n%s\n\n", ftdup);
	printf("     ====FT Funtion address======\n%p\n\n", ftdup);
}