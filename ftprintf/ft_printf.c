/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:55:36 by apaes-de          #+#    #+#             */
/*   Updated: 2022/03/29 20:09:53 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	read_text(char *txt, va_list *args)
{	
	int	i;
	int	print_size;

	i = 0;
	print_size = 0;
	while (txt != 0 && *txt != 0)
	{	
		if (*txt == '%')
			print_size += read_flags (++txt, args);
		else
		{
			write (1, txt, 1);
			print_size++;
		}
		txt++;
	}
	return (print_size);
}

int	read_flags(char *txt, va_list *args)
{
	int	i;
	int	print_size;

	i = 0;
	print_size = 0;
	if (*txt == 'c')
		print_size += print_character(va_arg(*args, int));
	if (*txt == 's')
		print_size += print_string(va_arg(*args, char *));
	if (*txt == 'p')
		print_size += print_number_16_pointer(va_arg(*args, UNL));
	if (*txt == 'd' || *txt == 'i')
		print_size += print_number_10(va_arg(*args, int));
	if (*txt == 'u')
		print_size += print_number_10_u(va_arg(*args, UNI));
	if (*txt == 'x')
		print_size += print_number_16_lower(va_arg(*args, UNI));
	if (*txt == 'X')
		print_size += print_number_16_upper(va_arg(*args, UNI));
	if (*txt == '%')
		print_size += print_character('%');
	return (print_size);
}

int	ft_printf(const char *txt, ...)
{
	va_list	args;
	int		print_size;

	print_size = 0;
	va_start (args, txt);
	print_size = read_text (((char *)txt), &args);
	va_end (args);
	return (print_size);
}

/*
int	main(void)
{
	static char str[30];
	//int index;
	UNI i;

	i = 25;
	str[0] = '-';

	printf("\n");
	printf("(printf) c = %c \n",'a');
	ft_printf("(ft_printf) c = %c \n",'a');
	printf("\n");
	printf("(printf) s = %s NULL\n",NULL);
	ft_printf("(ft_printf) s = %s NULL\n",NULL);
	printf("\n");
	printf("(printf) p = %p \n", str);
	ft_printf("(ft_printf) p = %p \n",str);
	printf("\n");
	printf("(printf) d = %d \n",12);
	ft_printf("(ft_printf) d = %d \n",12);
	printf("\n");
	printf("(printf) u = %u \n",-214748364);
	ft_printf("(ft_printf) u = %u \n",-214748364);
	printf("\n");
	printf("(printf) x = %x \n",111);
	ft_printf("(ft_printf) x = %x \n",111);
	printf("\n");
	printf("(printf) X = %X \n",111);
	ft_printf("(ft_printf) X = %X \n",111);
	printf("\n");
	printf("(printf) X = %% \n");
	ft_printf("(ft_printf) X = %% \n");
	printf("\n");
	
	return (0);
}
*/
