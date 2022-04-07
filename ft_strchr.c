/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:03:00 by asoler            #+#    #+#             */
/*   Updated: 2022/04/07 21:05:19 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>
#include <string.h>
int	main()
{
	char	s[] = "lest deliver  position";

	printf("\n\n   ---ft---\n%p\n", ft_strchr(s, 'x'));
	printf("\n\n   ---ft---\n%s\n", ft_strchr(s, 'x'));
	printf("\n\n   ---original---\n%p\n", strchr(s, 'x'));
	printf("\n\n   ---original---\n%s\n", strchr(s, 'x'));
}