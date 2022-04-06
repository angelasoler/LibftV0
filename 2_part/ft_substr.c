/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:59:43 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 15:05:09 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

char	*ft_substr(char *s, unsigned int start, unsigned int len)
{
	char	*result;
	int		i;

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
