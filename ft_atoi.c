/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:52:29 by asoler            #+#    #+#             */
/*   Updated: 2022/04/10 19:08:19 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	signal;
	int		result;

	signal = 'x';
	if (nptr[0] == '-' || nptr[0] == '+')
		signal = nptr[0];
	else if (*nptr >= '0' && *nptr <= '9')
		
	else
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	printf("    =====original=====\n%d\n", atoi("2147483650"));
}