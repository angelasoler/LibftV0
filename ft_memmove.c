/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:16:47 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 19:53:30 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*sdest;
	char			*ssrc;
	char			aux[n];
	unsigned int	i;

	i = 0;
	sdest = (char *)dest;
	ssrc = (char *)src;
	
	while (i < n)
	{
		aux[i] =  ssrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		sdest[i] =  aux[i];
		i++;
	}
	return ((void *)sdest);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char ft_dest[] = "whatever";
	char ft_src[] = "lets copy these into dest";
	char dest[] = "whatever";
	char src[] = "lets copy these into dest";
	int ft_int_dest[3] = {48, 48, 48};
	int ft_int_src[4] = {120, 120, 120, 120};
	int int_dest[3] = {48, 48, 48};
	int int_src[4] = {120, 120, 120, 120};
	int i;

	i = 0;
	printf("\n\n       ---------receiving char----- \n\n");
	ft_memmove(ft_dest, ft_src, 2);
	printf("      ------ft-----\n\n---dest---\n%s\n---src---\n%s\n", ft_dest, ft_src);
	memcpy(dest, src, 2);
	printf("\n  ------original-----\n\n---dest---\n%s\n---src---\n%s\n", dest, src);

	printf("\n\n       ---------receiving int----- \n\n");
	ft_memmove(ft_int_dest, ft_int_src, 2);
	printf("     ------ft-----\n\n---dest---\n\n");
	while (i < 3)
	{
		printf("\n%d\n", ft_int_dest[i]);
		i++;
	}
	i = 0;
	memmove(int_dest, int_src, 2);
	printf("\n  ------original-----\n\n---dest---\n\n");
	while (i < 3)
	{
		printf("\n%d\n", int_dest[i]);
		i++;
	}
}