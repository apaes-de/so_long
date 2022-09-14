/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:32:08 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 21:50:43 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_map(void)
{
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		while (map()->i_x_map < map()->size_x_map)
		{
			if (map()->map[map()->i_y_map][0] != '1'
				|| map()->map[map()->i_y_map][map()->size_x_map - 1] != '1')
				exit(0);
			else if (map()->map[0][map()->i_x_map] != '1'
				|| map()->map[map()->size_y_map - 1][map()->i_x_map] != '1')
				exit(0);
			map()->i_x_map++;
		}
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
}
/*------------------------------------------------------------------*/

void	error_map_max(void)
{
	int	first_line_max;

	first_line_max = len(map()->map[0]) - 1;
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		if (first_line_max != len(map()->map[map()->i_y_map]) - 1)
			exit (0);
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
}
