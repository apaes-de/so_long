/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colisions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:37:26 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:43:07 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	coli_exit_2(void)
{
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'E')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
	}
	if (map()->i_y_map == player()->y_player / 32
		&& map()->i_x_map == player()->x_player / 32
		&& map()->map[map()->i_y_map][map()->i_x_map] == 'C')
	{
		map()->map[map()->i_y_map][map()->i_x_map] = '0';
		map()->cont_exit--;
	}
}

void	coli_exit(void)
{
	coli_exit_2();
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'E'
		&& map()->cont_exit == 0)
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->exit_map, map()->i_x_map * 32, map()->i_y_map * 32);
	}
	if ((map()->i_y_map == player()->y_player / 32)
		&& (map()->i_x_map == player()->x_player / 32)
		&& (map()->map[map()->i_y_map][map()->i_x_map] == 'E')
		&& map()->cont_exit == 0)
		exit(0);
}

void	coli_enemy(void)
{
	int	i;

	i = 0;
	while (i < enemy_x()->cont_enemy)
	{
		if (((player()->y_player / 32) == enemy_x()->y_enemy[i] / 32)
			&& (player()->x_player / 32 == enemy_x()->x_enemy[i] / 32))
			exit(0);
		i++;
	}
	i = 0;
	while (i < enemy_y()->cont_enemy)
	{
		if (((player()->y_player / 32) == enemy_y()->y_enemy[i] / 32)
			&& (player()->x_player / 32 == enemy_y()->x_enemy[i] / 32))
			exit(0);
		i++;
	}
}
