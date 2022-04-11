/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:52:29 by asoler            #+#    #+#             */
/*   Updated: 2022/04/11 19:36:47 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

static int	power(char n, int len)
{
	int	number;

	number = n - 48;
	if (len == 0)
		return (number);
	while (len > 0)
	{
		number *= 10;
		len--;
	}
	return (number);
}

static int	ft_result(char *n, int len)
{
	int	result;

	result = 0;
	while (*n)
	{
		len--;
		result += power(*n, len);
		n++;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		result;
	char	*n;

	i = 0;
	n = (char *) nptr;
	if (!((nptr[0] == '-' || nptr[0] == '+') \
		|| (nptr[0] >= '0' && nptr[0] <= '9')))
		return (0);
	if (ft_strlen(nptr) > 1)
	{
		if (n[1] < '0' || n[1] > '9')
			return (0);
		else if (n[0] == '-' || n[0] == '+')
			i = 1;
	}
	while (n[i] >= '0' && n[i] <= '9')
		i++;
	n[i] = '\0';
	if (n[0] == '-' || n[0] == '+')
		result = ft_result(&n[1], i - 1);
	else
		result = ft_result(n, i);
	if (n[0] == '-')
		result *= -1;
	return (result);
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	n[] = "+564s";
	printf("    =====original=====\n%d\n", atoi(n));
	printf("    =====ft=====\n%d\n", ft_atoi(n));
}