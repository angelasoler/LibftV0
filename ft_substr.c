/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:25:30 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 15:29:23 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s,unsigned int start, unsigned int len)
{
	char *result;
	int i;

	i = 0;
	result = malloc(len * sizeof(char));
	while (start < len || s[start] != '\0')
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[start] = '\0';
	return (result);
}

#include <stdio.h>
int	main()
{
	char s[] = "lets take string from 5 position";

	printf("%s\n", ft_substr(s, 7, 50));
	// printf("\n%d\n", substr(s, 5, 50));
	// it's returning an int and also this funtion is kinf of a strncpy
}
