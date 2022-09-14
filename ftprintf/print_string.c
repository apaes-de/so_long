/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:00:47 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/12 20:50:51 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_size(char *str)
{
	int	i;

	i = 0;
	while (str != 0 && str[i] != 0)
		i++;
	return (i);
}

int	print_string(char *str)
{
	int	size;

	size = get_size(str);
	if (str == NULL)
	{
		return (write (1, "(null)", 6));
	}
	else
		write (1, str, size);
	return (size);
}
