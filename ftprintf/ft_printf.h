/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:10:07 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/12 20:49:37 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

# define UNI unsigned int
# define UNL unsigned long

int		print_character(char c);
int		read_flags(char *txt, va_list *args);
int		read_text(char *txt, va_list *args);
int		ft_printf(const char *txt, ...);
int		get_size(char *str);
int		print_string(char *str);
int		conversion_base_10(int n, char *str, char *base, int index);
int		conversion_base_16_lower(UNI n, char *str, char *base, int index);
int		conversion_base_16_upper(UNI n, char *str, char *base, int index);
int		conversion_base_16_pointer(UNL n, char *str, char *base, int index);
int		print_number_10(int n);
int		print_number_16_lower(UNI n);
int		print_number_16_upper(UNI n);
int		print_number_16_pointer(UNL n);
int		print_number_10_u(unsigned int n);

#endif
