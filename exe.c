/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:19:19 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/14 20:46:21 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf/ft_printf.h"
#include "Getnextline/get_next_line.h"
#include "so_long.h"

t_mlx	*data(void)
{
	static t_mlx	var_adress1;

	return (&var_adress1);
}
/*------------------------------------------------------------------*/

t_filefd	*fd(void)
{
	static t_filefd	var_adress4;

	return (&var_adress4);
}
/*------------------------------------------------------------------*/

void	main_2(void)
{
	while (fd()->line)
	{
		free (fd()->line);
		fd()->line = get_next_line(fd()->fd);
		map()->size_y_map++;
	}
}
/*------------------------------------------------------------------*/

int	main(int argc, char **argv)
{
	while (1)
	{
		if (argc <= 1)
			return (1);
		fd()->sargv = len(argv[1]);
		if (argv[1][fd()->sargv - 1] == 'r' && argv[1][fd()->sargv - 2] == 'e'
				&& argv[1][fd()->sargv - 3] == 'b'
				&& argv[1][fd()->sargv - 4] == '.')
		{
			(fd()->fd) = open(argv[1], O_RDONLY);
			if (fd()->fd < 3 && fd()->fd != 0)
				return (1);
			(fd()->line) = get_next_line(fd()->fd);
			if (!fd()->line)
				return (0);
			main_2();
			close((fd()->fd));
			(fd()->fd) = open(argv[1], O_RDONLY);
			mapa_matriz(fd()->fd);
		}
		else
			ft_printf(".ber");
	}
	return (0);
}
