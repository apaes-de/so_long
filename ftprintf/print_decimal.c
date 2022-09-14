/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:02:33 by apaes-de          #+#    #+#             */
/*   Updated: 2022/02/18 21:32:29 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_base_10(int n, char *str, char *base, int index)
{
	if (n < -9 || n > 9)
	{
		index = conversion_base_10(n / 10, str, base, index);
		index++;
		if (n < 0)
			n = n * -1;
		str[index] = base[(n % 10)];
		str[index + 1] = 0;
	}
	else
	{
		if (n < 0)
			n = n * -1;
		str[index] = base[n];
		str[index + 1] = 0;
	}
	return (index);
}

int	print_number_10(int n)
{
	char	str[30];

	str[0] = '-';
	if (n == -2147483648)
		return (print_string("-2147483648"));
	conversion_base_10(n, str, "0123456789", (n < 0));
	return (print_string(str));
}
