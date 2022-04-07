/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:09:12 by asoler            #+#    #+#             */
/*   Updated: 2022/04/07 21:40:45 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "hey, now we change";
	char s2[] = "hey, now we";
	char s3[] = "hey, now we change";
	int n = 100;

	printf("   =======indentical strings FT=======\n%d\n\n", ft_strncmp(s1, s3, n));
	printf("   =======diferent strings FT=======\n%d\n", ft_strncmp(s1, s2, n));
	printf("   =======indentical strings Original=======\n%d\n\n", strncmp(s1, s3, n));
	printf("   =======diferent strings Original=======\n%d\n", strncmp(s1, s2, n));
}