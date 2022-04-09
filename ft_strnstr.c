/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:05:30 by asoler            #+#    #+#             */
/*   Updated: 2022/04/09 21:23:30 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
	
// }

#include <stdio.h>
#include <string.h>
int	main()
{
	char	big[] = "where is null";
	char	little[] = "here is nullx";
	// int		len = 15;

	printf("    ======original======\n%s\n", strstr(big, little));
}