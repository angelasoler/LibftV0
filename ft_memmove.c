/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:16:47 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 22:30:43 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*sdest;
	char			*ssrc;
	char			aux[];
	unsigned int	i;

	i = 0;
	sdest = (char *)dest;
	ssrc = (char *)src;
	while (i < n)
	{
		aux[i] = ssrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		sdest[i] = aux[i];
		i++;
	}
	return ((void *)sdest);
}
