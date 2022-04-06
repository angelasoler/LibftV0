/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:38:03 by asoler            #+#    #+#             */
/*   Updated: 2022/04/06 21:56:51 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char ft = '*';
	char org = 'C';

	printf("          -----ft-----\n%c\n\n", ft_toupper(ft));
	printf("      ---------original-----\n%c\n\n", toupper(org));
	printf("      ---------original-----\n%c\n\n", toupper(ft));
	printf("          -----ft-----\n%c\n\n", ft_toupper(org));
}