/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:33:36 by apaes-de          #+#    #+#             */
/*   Updated: 2022/02/17 20:38:35 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_base_16_pointer(UNL n, char *str, char *base, int index)
{
	if (n > 15)
	{
		index = conversion_base_16_pointer(n / 16, str, base, index);
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

int	print_number_16_pointer(UNL n)
{
	char	str[30];

	str[0] = '0';
	str[1] = 'x';
	conversion_base_16_pointer(n, str, "0123456789abcdef", 2);
	return (print_string(str));
}
