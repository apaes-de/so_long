/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:56:05 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 21:15:46 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Getnextline/get_next_line.h"
#include "so_long.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}
/*------------------------------------------------------------------*/

int	map_checker(void)
{
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		while (map()->i_x_map < map()->size_x_map)
		{
			if (map()->map[map()->i_y_map][map()->i_x_map] != '1'
			&& map()->map[map()->i_y_map][map()->i_x_map] != '0'
			&& map()->map[map()->i_y_map][map()->i_x_map] != '\n'
			&& map()->map[map()->i_y_map][map()->i_x_map] != 'P'
			&& map()->map[map()->i_y_map][map()->i_x_map] != 'C'
			&& map()->map[map()->i_y_map][map()->i_x_map] != 'E'
			&& map()->map[map()->i_y_map][map()->i_x_map] != 'X'
			&& map()->map[map()->i_y_map][map()->i_x_map] != 'Y')
				exit (0);
			map()->i_x_map++;
		}
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
	return (0);
}
/*------------------------------------------------------------------*/

int	map_checker_2(void)
{
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		while (map()->i_x_map < map()->size_x_map)
		{
			if (map()->map[map()->i_y_map][map()->i_x_map] == 'P')
				cont()->cont_p++;
			else if (map()->map[map()->i_y_map][map()->i_x_map] == 'C')
				cont()->cont_c++;
			else if (map()->map[map()->i_y_map][map()->i_x_map] == 'E')
				cont()->cont_e++;
			map()->i_x_map++;
		}
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
	if (cont()->cont_p < 1 || cont()->cont_c < 1 || cont()->cont_e < 1)
		exit (0);
	return (0);
}
/*------------------------------------------------------------------*/

int	mapa_matriz(int fd)
{
	char	*line;
	int		i;

	i = 0;
	map()->i_y_map = 0;
	map()->map = (char **)malloc(sizeof(char *) * (map()->size_y_map + 32));
	if (!map()->map)
		return (1);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		map()->map[map()->i_y_map] = line;
		map()->i_y_map++;
	}
	map()->size_x_map = len(map()->map[0]) - 1;
	map_checker();
	map_checker_2();
	error_map();
	error_map_max();
	ft_mlx();
	return (0);
}
