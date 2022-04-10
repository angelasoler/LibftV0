/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:52:29 by asoler            #+#    #+#             */
/*   Updated: 2022/04/10 22:22:07 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	signal;
	int		i;
	int		result;
	// int		len;

	signal = 'x';
	i = 0;
	// len = ft_strlen(nptr);
	if (!((nptr[0] == '-' || nptr[0] == '+') || (nptr[0] >= '0' && nptr[0] <= '9')))
	// if first position of pointer is not signal or number
		return (0);
	if (nptr[0] == '-' || nptr[0] == '+')
	{
		signal = nptr[0];
		i = 1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	if (signal == 'x')
		result = ft(
			
		);
	return (result);
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	n[] = "5";
	printf("    =====ft=====\n%d\n", ft_atoi(n));
	printf("    =====original=====\n%d\n", atoi(n));
}