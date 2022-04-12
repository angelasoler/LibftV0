/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:10:08 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 21:39:24 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long int n)
{
	int	i;
	int	signal;

	i = 0;
	signal = 0;
	if (n < 0)
	{
		n *= -1;
		signal = 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (signal)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long int	n1;
	int			size;
	int			signal;
	char		*result;

	signal = 0;
	n1 = n;
	size = ft_count_digits(n);
	result = malloc(sizeof(char) * (size + 1));
	if (n1 < 0)
	{
		n1 *= -1;
		signal = 1;
	}
	while (size > 0)
	{
		size--;
		result[size] = (n1 % 10) + 48;
		n1 /= 10;
	}
	if (signal)
		result[0] = '-';
	return (result);
}
