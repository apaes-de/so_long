/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:55:41 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 23:34:01 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_map(void)
{
	if (map()->map[map()->i_y_map][map()->i_x_map] == '1')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->wall, map()->i_x_map * 32, map()->i_y_map * 32);
	}
	if (map()->map[map()->i_y_map][map()->i_x_map] == '0')
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'P')
	{
		player()->x_player = map()->i_x_map * 32;
		player()->y_player = map()->i_y_map * 32;
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			player()->anim_player[player()->i_anim_player],
			map()->i_x_map * 32, map()->i_y_map * 32);
	}
}
/*------------------------------------------------------------------*/

void	init_map_2(void)
{
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'E')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
	}
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'X')
	{
		enemy_x()->x_enemy[enemy_x()->cont_enemy] = map()->i_x_map * 32;
		enemy_x()->y_enemy[enemy_x()->cont_enemy] = map()->i_y_map * 32;
		enemy_x()->cont_enemy++;
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			enemy_x()->anim_enemy[enemy_x()->i_anim_enemy],
			map()->i_x_map * 32, map()->i_y_map * 32);
	}
}
/*------------------------------------------------------------------*/

void	init_map_3(void)
{
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'Y')
	{
		enemy_y()->x_enemy[enemy_y()->cont_enemy] = map()->i_x_map * 32;
		enemy_y()->y_enemy[enemy_y()->cont_enemy] = map()->i_y_map * 32;
		enemy_y()->cont_enemy++;
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			enemy_y()->anim_enemy[enemy_y()->i_anim_enemy],
			map()->i_x_map * 32, map()->i_y_map * 32);
	}
}
/*------------------------------------------------------------------*/

void	print_map_2(void)
{
	mlx_string_put(data()->mlx_ptr, data()->win_ptr, 5,
		map()->size_y_map * 32 + 4, 50000, "Steps:");
	mlx_string_put(data()->mlx_ptr, data()->win_ptr, 70,
		map()->size_y_map * 32 + 4, 50000, ft_itoa(player()->steps));
}

void	print_map(void)
{
	error_map();
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		while (map()->i_x_map < map()->size_x_map)
		{
			init_map();
			init_map_2();
			init_map_3();
			if (map()->map[map()->i_y_map][map()->i_x_map] == 'C')
			{
				mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
					map()->back[map()->i_anim_back],
					map()->i_x_map * 32, map()->i_y_map * 32);
				mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
					map()->coin[map()->i_anim_coin],
					map()->i_x_map * 32, map()->i_y_map * 32);
				map()->cont_exit++;
			}
			map()->i_x_map++;
		}
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
	print_map_2();
}
