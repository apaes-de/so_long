/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:33:42 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/12 20:48:26 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_base_10_u(unsigned int n, char *str, char *base, UNI index)
{
	if (n > 9)
		index += conversion_base_10_u(n / 10, str, base, index);
	str[index] = base[(n % 10)];
	str[index + 1] = 0;
	return (index + 1);
}

int	print_number_10_u(unsigned int n)
{
	char	str[30];

	conversion_base_10_u(n, str, "0123456789", 0);
	return (print_string(str));
}
