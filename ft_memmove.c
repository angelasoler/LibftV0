/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:16:47 by asoler            #+#    #+#             */
/*   Updated: 2022/04/07 20:16:29 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*sdest;
	char			*ssrc;

	sdest = (char *)dest;
	ssrc = (char *)src;
	
	while (n != 0)
	{
		sdest[n - 1] =  ssrc[n - 1];
		n--;
	}
	return ((void *)sdest);
}


#include <stdio.h>
#include <string.h>
int	main()
{
	
	char ft_over_dest[] = "abcde";
	char over_dest[] = "abcde";
	char ft_src[] = "lets copy these into dest";
	char ft_dest[] = "whatever";
	char dest[] = "whatever";
	char src[] = "lets copy these into dest";
	int ft_int_src[4] = {120, 120, 120, 120};
	int ft_int_dest[3] = {48, 48, 48};
	int int_dest[3] = {48, 48, 48};
	int int_src[4] = {120, 120, 120, 120};
	int i;

	i = 0;
	printf("\n\n            =========Overlaping case==========\n\n");
	printf("\n\n     ------original dest-----\n\n%s", ft_over_dest);
	ft_memmove(&ft_over_dest[2], &ft_over_dest[0], 3);
	printf("\n\n     ------dest after ft function-----\n\n%s", ft_over_dest);
	printf("\n\n     ------dest-----\n\n%s", over_dest);
	memmove(&over_dest[2], &over_dest[0], 3);
	printf("\n\n     ------dest after original function-----\n\n%s\n\n", over_dest);
	printf("\n\n            =========NOT overlaping case==========\n\n");
	printf("\n\n       ---------receiving char----- \n\n");
	ft_memmove(ft_dest, ft_src, 2);
	printf("     ------ft-----\n\n     ---dest---\n%s\n     ---src---\n%s\n", ft_dest, ft_src);
	memcpy(dest, src, 2);
	printf("\n     ------original-----\n\n     ---dest---\n%s\n     ---src---\n%s\n", dest, src);

	printf("\n\n     ---------receiving int----- \n\n");
	ft_memmove(ft_int_dest, ft_int_src, 2);
	printf("     ------ft-----\n\n     ---dest---\n\n");
	while (i < 3)
	{
		printf("\n%d\n", ft_int_dest[i]);
		i++;
	}
	i = 0;
	memmove(int_dest, int_src, 2);
	printf("\n     ------original-----\n\n     ---dest---\n\n");
	while (i < 3)
	{
		printf("\n%d\n", int_dest[i]);
		i++;
	}
}
