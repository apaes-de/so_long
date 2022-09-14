/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:26:45 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:15:50 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_player_3_3(void)
{
	mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
		map()->back[map()->i_anim_back], player()->x_player,
		player()->y_player);
	mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
		player()->anim_player[player()->i_anim_player],
		player()->x_player, player()->y_player);
}
/*------------------------------------------------------------------*/

void	print_player_3(void)
{
	int	i;

	print_player_3_3();
	i = 0;
	while (i < enemy_x()->cont_enemy)
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], enemy_x()->x_enemy[i],
			enemy_x()->y_enemy[i]);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			enemy_x()->anim_enemy[enemy_x()->i_anim_enemy],
			enemy_x()->x_enemy[i], enemy_x()->y_enemy[i]);
		i++;
	}
	i = 0;
	while (i < enemy_y()->cont_enemy)
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], enemy_y()->x_enemy[i],
			enemy_y()->y_enemy[i]);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			enemy_y()->anim_enemy[enemy_y()->i_anim_enemy],
			enemy_y()->x_enemy[i], enemy_y()->y_enemy[i]);
		i++;
	}
}
/*------------------------------------------------------------------*/

void	print_player_2_2(void)
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
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
}
/*------------------------------------------------------------------*/

void	print_player_2(void)
{
	print_player_2_2();
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'C')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->coin[map()->i_anim_coin], map()->i_x_map * 32,
			map()->i_y_map * 32);
	}
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'X')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
	}
	if (map()->map[map()->i_y_map][map()->i_x_map] == 'Y')
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->back[map()->i_anim_back], map()->i_x_map * 32,
			map()->i_y_map * 32);
	}
}
/*------------------------------------------------------------------*/

void	print_player(void)
{
	map()->i_y_map = 0;
	while (map()->i_y_map < map()->size_y_map)
	{
		while (map()->i_x_map < map()->size_x_map)
		{
			print_player_2();
			coli_exit();
			coli_enemy();
			map()->i_x_map++;
		}
		map()->i_x_map = 0;
		map()->i_y_map++;
	}
	print_player_3();
}
