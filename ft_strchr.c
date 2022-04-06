/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:03:00 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 22:20:48 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		i++;
	}
	return ((char *)s);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	s[] = "lest deliver x position";

	printf("\n\n   ---ft---\n%p\n", ft_strchr(s, 'x'));
	printf("\n\n   ---ft---\n%s\n", ft_strchr(s, 'x'));
	printf("\n\n   ---original---\n%p\n", strchr(s, 'p'));
	printf("\n\n   ---original---\n%s\n", strchr(s, 'p'));
}