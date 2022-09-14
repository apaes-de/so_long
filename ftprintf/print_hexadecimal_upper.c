/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal_upper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:12:30 by apaes-de          #+#    #+#             */
/*   Updated: 2022/02/17 20:38:29 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_base_16_upper(UNI n, char *str, char *base, int index)
{
	if (n > 15)
	{
		index = conversion_base_16_upper(n / 16, str, base, index);
		index++;
		if (n < 0)
			n = n * -1;
		str[index] = base[(n % 16)];
	}
	else
	{
		if (n < 0)
			n = n * -1;
		str[index] = base[n];
	}
	str[index + 1] = 0;
	return (index);
}

int	print_number_16_upper(UNI n)
{
	char	str[30];

	conversion_base_16_upper(n, str, "0123456789ABCDEF", 0);
	return (print_string(str));
}
