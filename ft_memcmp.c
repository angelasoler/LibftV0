/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:08:30 by asoler            #+#    #+#             */
/*   Updated: 2022/04/09 20:34:32 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	char	*s_s1;
// 	char	*s_s2;

// 	s_s1 = (char *)s1;
// 	s_s1 = (char *)s2;
// 	while (n != 0)
// 	{
// 		if (*s_s1 != *s_s2)
// 			return (*s_s1 - *s_s2);
// 		if (*s_s1 == '\0' && *s_s2 == '\0')
// 			return (0);
// 		s_s1++;
// 		s_s2++;
// 		n--;
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "hey, now we change";
	char s2[] = "hey, now we";
	char s3[] = "hey, now we change";
	int n = 40;

	// printf("   =======indentical strings FT=======\n%d\n\n", ft_memcmp(s1, s3, n));
	// printf("   =======diferent strings FT=======\n%d\n", ft_memcmp(s1, s2, n));
	printf("   =======indentical strings Original=======\n%d\n\n", memcmp(s1, s3, n));
	printf("   =======diferent strings Original=======\n%d\n", memcmp(s1, s2, n));
}