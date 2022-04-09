/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:40:36 by asoler            #+#    #+#             */
/*   Updated: 2022/04/09 20:05:32 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			result = i;
		}
		s++;
		i++;
	}
	if (result == 0)
		return ((char *)0);
	else
	{
		i -= result;
		return ((char *)s - i);
	}
}
