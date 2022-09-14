/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:30:05 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 21:47:32 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count_a(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_power(int i)
{
	int		div;

	div = 1;
	while (i > 0)
	{
		div = div * 10;
		i--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		div;

	i = ft_count_a(n);
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (s == NULL)
		return (NULL);
	div = ft_power(i - 1);
	i = 0;
	if (n == -2147483648)
		return (ft_strcpy(s, "-2147483648"));
	if (n < 0)
	{
		s[i++] = '-';
		n = -n;
	}
	while (div > 0)
	{
		s[i] = (n / div % 10 + 48);
		i++;
		div = div / 10;
	}
	s[i] = '\0';
	return (s);
}
