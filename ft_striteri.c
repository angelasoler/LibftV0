/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:44:53 by asoler            #+#    #+#             */
/*   Updated: 2022/04/12 15:14:37 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (f)(unsigned int, char*))
{
	int i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

void	ft(unsigned int x, char *c)
{
	*c += x;
}

#include <stdio.h>

int	main()
{
	char	s[] = "abc";

	ft_striteri(s, ft);
	printf("   ====string after passing by ft=====\n%s\n", s);
}
